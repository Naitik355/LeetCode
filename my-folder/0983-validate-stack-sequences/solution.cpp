class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int j=0;
        for(int c:pushed){
            st.push(c);
        
            while(!st.empty()&& st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};
