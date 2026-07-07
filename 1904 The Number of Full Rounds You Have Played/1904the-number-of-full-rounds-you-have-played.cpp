class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        int loginhour=stoi(loginTime.substr(0,2)),loginmin=stoi(loginTime.substr(3,2));
        int logouthour=stoi(logoutTime.substr(0,2)),logoutmin=stoi(logoutTime.substr(3,2));

        int ans=0;
        int a = loginhour*60+loginmin;
        int b = logouthour*60+logoutmin;
 
        if(a>b) b+=1440;
        return max(0,b/15-(a+14)/15);
        

    }
};