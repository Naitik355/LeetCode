class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ans=0;
        for(char c:chars){
            mp[c]++;
        }
        for(string word:words){
            unordered_map<char,int>temp=mp;
            bool possible=true;
            for(char c:word){
                if(temp[c]==0){
                    possible=false;
                    break;
                }
                temp[c]--;
            }
            if(possible){
                ans+=word.length();
            }
        }
        return ans;
    }
};
