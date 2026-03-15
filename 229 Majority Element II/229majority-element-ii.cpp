class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,e1=0,e2=0;
        int n = nums.size()/3;
        for(int x: nums){
            if(x==e1) c1++;
            else if(x==e2) c2++;
            else if(c1==0){
                e1=x; c1=1;
            }
            else if(c2==0){
                e2=x; c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;c2=0;
        for(int x:nums){
            if(x==e1) c1++;
            else if(x==e2) c2++;
        }

        vector<int> ans;
        if(c1>n) ans.push_back(e1);
        if(c2>n) ans.push_back(e2);
        return ans;
    }
};