class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        if(num.length()==k) return "0";
        stack<char>st;
        for(char c:num){
            while(k>0 && !st.empty() && st.top()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.length()&& ans[i]=='0') i++;
        ans=ans.substr(i);
        if(ans.length()==0) return "0";
        return ans;

    }
};



