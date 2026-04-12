class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0],b = sides[1],c=sides[2];
        vector<double> ans(3);
        if((a+b<=c) ||(b+c<=a)||(c+a<=b)) return {};
        ans[0] = (acos((b*b+c*c-a*a)/(2*b*c))*180/M_PI);
        ans[1] = (acos((a*a+c*c-b*b)/(2*a*c))*180/M_PI);
        ans[2] = (acos((a*a+b*b-c*c)/(2*b*a))*180/M_PI);

        sort(ans.begin(),ans.end());
        return ans;
    }

};