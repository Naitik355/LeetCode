class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>a;
        for(int b:asteroids){
            while(!a.empty() && a.back()>0 && b<0){
                if(a.back()<-b){
                    a.pop_back();
                    continue;
                }
                else if(a.back()==-b){
                    a.pop_back();

                }
                b=0;
                break;
            }
            if(b!=0){ 
                a.push_back(b);
            }
        }

        return a;
    }
};
