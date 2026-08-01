class Solution {
public:
    static bool func(vector<int> &a, vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),func);
        int ans=0;
        for(auto x: boxTypes){
            int b = min(x[0],truckSize);
            ans+=(b*x[1]);
            truckSize-=b;
            if(truckSize<=0) break;

        }
        return ans;


    }
};