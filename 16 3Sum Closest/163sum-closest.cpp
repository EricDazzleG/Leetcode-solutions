class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
  
        sort(nums.begin(),nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        for(int i =0;i<nums.size()-2;i++){
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){

                int sum=nums[i]+nums[j]+nums[k];
                if(sum- target ==0){
                    return target;
                }
                if(abs(1LL*sum-target) <abs(1LL*closest-target)){
                    closest = sum;

                }
                if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                
            }
        }
            
        return closest;

    }
};