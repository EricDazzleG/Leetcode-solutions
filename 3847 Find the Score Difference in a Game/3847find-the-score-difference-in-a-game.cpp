class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int score1 =0,score2=0;
        bool flag = true;
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2!=0){
                flag = !(flag);
            }
            if((i+1)%6==0){
                flag=!flag;
            }
            if(flag) score1+=nums[i];
            if(!flag) score2+=nums[i];

        }
        return score1-score2;
    }
};