class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>freq;
        unordered_map<char,bool>used;
        stack<char>st;
        string ans="";
        for(char c:s){
            freq[c]++;
        }
        for(char c:s){
            freq[c]--;
            if(used[c]){
                continue;
            }
            while(!st.empty() && st.top()>c && freq[st.top()]>0){
                used[st.top()]=false;
                st.pop();
            }
            st.push(c);
            used[c]=true;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};
