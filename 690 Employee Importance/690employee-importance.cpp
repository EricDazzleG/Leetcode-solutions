/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    void dfs(unordered_map<int, Employee*>m,int id, int& sum){
        sum+=m[id]->importance;
        for(auto x:m[id]->subordinates){
            dfs(m,x,sum);
        }
    }
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*>m;
        for(auto e:employees){
            m[e->id]=e;
        }
        int sum=0;
        dfs(m,id,sum);
        return sum;
    }
};