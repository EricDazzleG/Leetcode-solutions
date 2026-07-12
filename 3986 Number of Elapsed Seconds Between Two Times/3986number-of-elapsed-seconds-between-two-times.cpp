class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int startsec = stoi(startTime.substr(6,2));
        int startmin = stoi(startTime.substr(3,2));
        int starthour = stoi(startTime.substr(0,2));
        int endsec = stoi(endTime.substr(6,2));
        int endmin = stoi(endTime.substr(3,2));
        int endhour = stoi(endTime.substr(0,2));
        int starttot = starthour*60*60 + startmin*60 + startsec;
        int endtot = endhour*60*60 +endmin*60 +endsec;
        return abs(starttot-endtot);
    }
};