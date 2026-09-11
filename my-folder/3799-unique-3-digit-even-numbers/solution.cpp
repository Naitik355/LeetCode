class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>v(10,0);
        for(int n:digits){
            v[n]++;
        }
        vector<int>ans;
        for(int h=1;h<=9;h++){
            if(v[h]==0) continue;
            v[h]--;
            for(int t=0;t<=9;t++){
                if(v[t]==0) continue;
                v[t]--;
            for(int u=0;u<=8;u+=2){
                if(v[u]>0){
                    ans.push_back(h*100+t*10+u);
                }
            }
            v[t]++;
        }
        v[h]++;
        }
        return ans.size();
    }
};
