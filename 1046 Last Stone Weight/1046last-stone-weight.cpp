class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> m;
        for(int i =0;i<stones.size();i++){
            m.push(stones[i]);
        }
        while(m.size()>1){
        int a = m.top();
        m.pop();
        int b = m.top();
        m.pop();
        if(a!=b){
            m.push(a-b);
        }
    
        }
        return m.empty()?0:m.top();


    }
};