class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpt;
        int sIndex=-1;
        for(char c:t){
            mpt[c]++;
        }
        int left=0;
        int count=0;
        int minlen=INT_MAX;
        for(int right=0;right<s.length();right++){
            if(mpt[s[right]]>0){
                count++;
            }
                mpt[s[right]]--;
            while(count==t.length()){
                if((right-left+1)<minlen){
                    minlen=right-left+1;
                    sIndex=left;
                }
                mpt[s[left]]++;
                if(mpt[s[left]]>0) count--;
                left++;
            }
        }
        if(sIndex==-1) return "";
        return s.substr(sIndex,minlen);
    }
};
