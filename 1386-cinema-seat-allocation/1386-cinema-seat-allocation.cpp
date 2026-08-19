class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        if(reservedSeats.empty()){
            return 2*n;
        }
        int reservedrow=1;
        sort(reservedSeats.begin(),reservedSeats.end());
        int curr=reservedSeats[0][0];
        int ans=0;
        vector<int> r(10,0);
        r[0]=1;
        r[9]=1;
        for(auto x: reservedSeats){
            int row= x[0];
            int seat = x[1];
            if(row!=curr){
                reservedrow++;
                if((r[1]==0 && r[2]==0 && r[3]==0 && r[4]==0) && (r[5]==0 && r[6]==0 && r[7]==0 && r[8]==0) )ans+=2;
                else{
                    if(r[1]==0 && r[2]==0 && r[3]==0 && r[4]==0) ans++;
                    if(r[5]==0 && r[6]==0 && r[7]==0 && r[8]==0) ans++;
                    if(r[1] || r[2] || r[3] || r[4]){
                        if(r[5] || r[6] || r[7] || r[8]){
                            if(r[3]==0 && r[4]==0 && r[5]==0 && r[6]==0){
                                ans++;
                            }

                        }
                    }
                }
                 
                
                r.assign(10,0);
                r[0]=1; r[9]=1;
                curr=row;
            }
            r[seat-1]=1;
            
        }
        if((r[1]==0 && r[2]==0 && r[3]==0 && r[4]==0) && (r[5]==0 && r[6]==0 && r[7]==0 && r[8]==0) )ans+=2;
                else{
                    if(r[1]==0 && r[2]==0 && r[3]==0 && r[4]==0) ans++;
                    if(r[5]==0 && r[6]==0 && r[7]==0 && r[8]==0) ans++;
                    if(r[1] || r[2] || r[3] || r[4]){
                        if(r[5] || r[6] || r[7] || r[8]){
                            if(r[3]==0 && r[4]==0 && r[5]==0 && r[6]==0){
                                ans++;
                            }

                        }
                    }
                }
        ans+=(2*(n-reservedrow));
        return ans;
    }
};