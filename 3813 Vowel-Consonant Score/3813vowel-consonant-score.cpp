class Solution {
public:
    int vowelConsonantScore(string s) {
        int l  = s.length();
        int c,v = 0;int count =0;
        for(char &a : s){
            if(!isalpha(a)) count++;
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
                v++;
            }
        }
        c =l - v-count;
        if( c==0 )return 0;
        return v/c;
    }
};