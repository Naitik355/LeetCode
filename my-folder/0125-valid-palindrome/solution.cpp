class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        string revresult="";
        for(char c:s){
            if(!isspace(c)&&!ispunct(c)) result+=tolower(c);
        }
        revresult=result;
        reverse(revresult.begin(),revresult.end());
        cout<< revresult;
        if(result==revresult){
            return true;
        }
         return false;
     }

};
