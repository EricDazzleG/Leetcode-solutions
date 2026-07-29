class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        arr.reserve(nums.size());
        for(int x: nums){
            arr.push_back(to_string(x));

        }
        sort(arr.begin(),arr.end(),[](const string&a, const string &b){
            return a+b>b+a;
        });
        if(arr[0]=="0") return "0";
        string ans ="";
        for(auto &s: arr){
            ans+=s;
        }
        return ans;
    }
};