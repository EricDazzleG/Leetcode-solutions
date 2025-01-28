class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0;int rev=0;int orig=x;
        if(x<0){
            cout<<"False"<<endl;
            return false;
        }
        else{
            while(x!=0){
                rem=x%10;
                 if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && rem > 7)) 
                return false;
                rev= rev*10+rem;
                x=x/10;
            }
            if(orig==rev){
                cout<<"True"<<endl;
                return true;
            }
            else{
                cout<<"False"<<endl;
                return false;
            }

        }
        return{};
    }
};