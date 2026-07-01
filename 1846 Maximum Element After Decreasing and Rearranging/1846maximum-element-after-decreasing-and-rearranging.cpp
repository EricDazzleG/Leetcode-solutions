class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        for(int i =0;i<arr.size();i++){
            if(arr[i]==1){
                int temp = arr[i];
                arr[i]=arr[0];
                arr[0]=temp;
                break;
            }
        }
        if(arr[0]!=1){
            arr[0]=1;
        }
        sort(arr.begin(),arr.end());
        for(int i =1;i<arr.size();i++){
            if(arr[i]-arr[i-1]>1) arr[i]=arr[i-1]+1;
            else continue;
        }
        
        return arr.back();
    }
};