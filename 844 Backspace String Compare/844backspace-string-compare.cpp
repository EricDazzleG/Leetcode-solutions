class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a,b;
        for(auto &x:s){
            if(a.empty() && x=='#') continue;
            if(x=='#') a.pop();
            else a.push(x);
        }
        for(auto &x:t){
            if(b.empty() && x=='#') continue;
            if(x=='#') b.pop();
            else b.push(x);
        }
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top()) return false;
            a.pop();b.pop();
        }
        return a.empty() && b.empty();
    }
};