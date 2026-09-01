class Solution {
public:
    int idx;
    int calc(string &s){
        long long res=0;
        long long curr=0;
        int sign=1;
        while(idx<s.length()){
            char c=s[idx++];
            if(c>='0' && c<='9') curr=curr*10+c-'0';
            else if(c=='(') curr=calc(s);
            else if(c==')') return res+sign*curr;
            else if(c=='+' || c=='-'){
                res+=sign*curr;
                curr=0;
                sign=c=='-'?-1:1;
            }
        }
        return res+sign*curr;

    }
    int calculate(string s) {
        idx=0;
        return(calc(s));
    }
};
