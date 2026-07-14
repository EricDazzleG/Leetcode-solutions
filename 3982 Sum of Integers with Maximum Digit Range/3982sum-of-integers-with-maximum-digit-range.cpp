class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int sum =0;
        int n  = nums.size();
        vector<int> v(n+1,0);
        vector<int> temp = nums;
        for(int i =0;i<n;i++){
            int largest=0,smallest=INT_MAX;
            while(temp[i]){
               
                int rem = temp[i]%10;
                temp[i]=temp[i]/10;
                largest = max(largest,rem);
                smallest = min(smallest,rem);
                               
            }
             v[i] = largest-smallest;

        }
        int maxi=0;
        for(int x:v){
            maxi=max(maxi,x);
        }
        for(int i=0;i<n;i++){
            if(v[i]==maxi){
                sum+=nums[i];
            }
        }
        return sum;
    }
};