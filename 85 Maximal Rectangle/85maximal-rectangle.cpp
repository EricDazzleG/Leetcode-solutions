class Solution {
public:
    vector<int>nextsmallerelement(vector<int> heights, int n){
        stack <int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = n-1;i>=0;i--){
            int curr = heights[i];
            while(s.top()!=-1 && (heights[s.top()]>=curr)){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevsmallerelement(vector<int> heights, int n){
        stack <int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i =0;i<n;i++){
            int curr = heights[i];
            while(s.top()!=-1 && (heights[s.top()]>=curr)){
                s.pop();
            }
            ans[i]= s.top();
            s.push(i);
        }
        return ans;
    }

    int largestrectanglearea(vector<int> heights){
        int n = heights.size();
        vector<int> next(n);
        next = nextsmallerelement(heights,n);
        vector<int> prev(n);
        prev = prevsmallerelement(heights,n);
        int area = -1;
        for(int i =0;i<n;i++){
            int l = heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            int maxarea = l*b;
            area = max(area,maxarea);
        }
        return area;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()){
            return 0;
        }
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int> heights(n,0);
        int area=-1;
        for(int i =0;i<matrix.size();i++){
            for(int j =0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    heights[j]+=1;
                }
                else{
                    heights[j]=0;
                }

            }
            area = max(area,largestrectanglearea(heights));
        }
        return area;
    }
};