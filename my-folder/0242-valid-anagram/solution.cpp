class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int freq[26]={0};
        for(char c:s) freq[c-'a']++;
        for(char d:t) freq[d-'a']--;
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return 0;
        }
        return 1;
    }
};
