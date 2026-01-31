class Solution {
public:
    vector<vector<int>> ans;

    void twoSum(vector<int>& nums, long long newTarget, int i, int j, int low, int high){
        while(low < high){
            if(nums[low] + nums[high] < newTarget){
                low++;
            }
            else if(nums[low] + nums[high] > newTarget){
                high--;
            }
            else{
                ans.push_back({nums[i], nums[j], nums[low], nums[high]});

                int tmpInd1 = low; int tmpInd2 = high;
                while(low < high && nums[low] == nums[tmpInd1]) low++;
                while(low < high && nums[high] == nums[tmpInd2]) high--;
            }
        }
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target){
        int n = nums.size();
        sort(begin(nums), end(nums));
        
        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                twoSum(nums, newTarget, i, j, low, high);

                while(j+1 < n && nums[j] == nums[j+1]) j++;
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
        
        return ans;
    }
};