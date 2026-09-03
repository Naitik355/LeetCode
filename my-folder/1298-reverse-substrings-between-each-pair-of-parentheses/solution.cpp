class Solution {
public:
    string reverseParentheses(string s) {
        vector<int>v;
        string ans="";
        for(char c:s){
            if(c=='('){
                v.push_back(ans.length());
            }
            else if (c==')'){
                int i=v.back();
                v.pop_back();
                reverse(ans.begin()+i,ans.end());
            }
            else{
                ans+=c;
            }
        }
        return ans;
    }
};
