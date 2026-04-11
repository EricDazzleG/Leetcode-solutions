class Solution {
public:
    bool isprime(int x){
        if(x==1) return false;
        if(x==2) return true;
        bool flag = true;
        for(int i =2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
        
    }
    int minOperations(vector<int>& nums) {
        int count=0;
       for(int i =0;i<nums.size();i++){
           if(i%2==0){
               if(nums[i]==1){
                   nums[i]=2;
                   count++;
               } 
            
                while(!isprime(nums[i])){
                   nums[i]= nums[i]+1;
                   count++;
                }  
           }
           else{
               if(nums[i]==1) continue;
               
                while(isprime(nums[i])){
                   nums[i]= nums[i]+1;
                   count++;  
               }           
           }
       }
    return count;
    }
};