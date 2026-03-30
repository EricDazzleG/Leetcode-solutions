class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mini =INT_MAX;
        for(int i =0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if((nums[i]==1 && nums[j]==2) || (nums[j]==1 && nums[i]==2) ){
                    int m = abs(i-j);
                    mini = min(mini,m);
                }
                
            }
        }
        if(mini!=INT_MAX){
            return mini;
        }
        return -1;
    }
};