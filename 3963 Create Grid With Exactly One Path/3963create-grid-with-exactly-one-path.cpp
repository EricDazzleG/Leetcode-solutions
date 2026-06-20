class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> a(m,string(n,'#'));
        int i =0,j=0;
        a[0][0]='.';
        while(j+1<n) a[i][++j]='.';
        while(i+1<m) a[++i][j]='.';
        return a;
    }
};