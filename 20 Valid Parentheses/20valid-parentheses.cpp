class Solution {
public:
    bool isValid(string s) {
        stack <char> a;
        for(int i =0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{'||s[i]=='['){
                a.push(s[i]);
            }
            else{
                if(a.empty()) return 0;
                if((s[i]==')'&& a.top()=='(') || (s[i]==']'&& a.top()=='[')|| (s[i]=='}'&& a.top()=='{')){
                    a.pop();
                }
                else{
                    return false;
                }
            }
        }
        return a.empty();
    }
};