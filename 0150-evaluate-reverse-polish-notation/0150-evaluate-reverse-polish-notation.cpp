class Solution {
public:
    int oper(int a, int b, string token){
        if(token=="+"){
            return a+b;
        }
        if(token=="-"){
            return a-b;
        }
        if(token=="*"){
            return a*b;
        }
        if(token=="/"){
            return a/b;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x: tokens){
            if(x=="+" || x=="-" || x=="*" || x=="/"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                int result = oper(a,b,x);
                s.push(result);
            }else
                s.push(stoi(x));

        }
        return s.top();
    }
    
};