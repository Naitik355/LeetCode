class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        for(int i=0;i<n-1;i++){
            code.push_back(code[i]);
        }   
        for(int i=1;i<2*n-1;i++){
            code[i]+=code[i-1];
        }
        if(k>0){
            for(int i=0;i<n;i++){
                ans[i]=code[k+i]-code[i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans[i]=code[n-1+i]-code[i+n-1+k];
            }
        }
        return ans;
    }
};
