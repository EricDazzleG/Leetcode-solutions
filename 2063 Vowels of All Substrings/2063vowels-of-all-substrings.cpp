class Solution {
public:
    long long countVowels(string word) {
        long long count=0;
        int l = word.size();
        for(int i =0;i<l;i++){
            if(word[i]=='a' || word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u' ){
                count+=(long)(l-i)*(long)(i+1);
            }
        }
        return count;
    }

};