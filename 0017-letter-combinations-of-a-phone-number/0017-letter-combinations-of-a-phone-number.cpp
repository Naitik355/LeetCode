class Solution {
public:
    void helper(int index,string digits,vector<string>map,vector<string>&ans,string& curr){
        if(digits.size()==index){
            ans.push_back(curr);
            return;
        }
        int digit=digits[index]-'0';
        for(char c:map[digit]){
            curr.push_back(c);
            helper(index+1,digits,map,ans,curr);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string curr;
        vector<string>map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(0,digits,map,ans,curr);
        return ans;
    }
};