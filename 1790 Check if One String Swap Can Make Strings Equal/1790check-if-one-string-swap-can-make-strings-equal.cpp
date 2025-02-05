class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if(s1.length()!=s2.length()){
            return false;
        }
        int f=0;
        int l=0;
        int diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                diff++;

                if(diff>2){
                    return false;
                }
                else if(diff==1){
                    f= i;
                }
                else{
                    l=i;
                }
            }
        }
        return s1[f]==s2[l] && s1[l]==s2[f]; 
    }
};