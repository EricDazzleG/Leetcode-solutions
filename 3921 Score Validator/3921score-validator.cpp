class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score =0,counter=0;
        for(auto & x: events){
            if(counter<10){

            
                if(x!= "W" && x!="WD" && x!="NB" ){
                    score+=stoi(x);
                }
                if(x=="W" && counter<10) counter++;
                if(x=="WD" || x=="NB") score++;
            }
       } 
       return {score, counter};
    }
};