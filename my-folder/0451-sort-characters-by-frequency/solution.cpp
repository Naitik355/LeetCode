class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<int,char>> v;
        for(auto&it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        string ans;
        for(auto &p:v){
            ans.append(p.first,p.second);
        }   
        return ans;
    }
};
