class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<string> st;
        string x="";
        for(int i=0;i<s.length();i++){
            if(x=="" && s[i]==' ') continue;
            x.push_back(s[i]);
            
            if(s[i]==' '){
                st.push(x);
                x="";
                continue;
            }
        }
        st.push(x+" ");
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        ans.pop_back();
        if(ans.front()==' ') ans.erase(ans.begin());
        return ans;
    }
};