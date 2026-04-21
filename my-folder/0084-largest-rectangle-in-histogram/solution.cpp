class Solution {
public:
    vector<int> nse(vector<int>& heights){
        int n=heights.size();
        vector<int> nse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);    
        }
        return nse;
    }
    vector<int> pse(vector<int>& heights){
        int n=heights.size();
        vector<int> pse(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);    
        }
        return pse;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nextsmaller=nse(heights);
        vector<int> prevsmaller=pse(heights);
        int maxa=0;
        for(int i=0;i<heights.size();i++){
            maxa=max(maxa,heights[i]*(nextsmaller[i]-prevsmaller[i]-1));
        }
        return maxa;
    }
};
