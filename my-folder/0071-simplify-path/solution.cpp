class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string temp="";
        for(char c:path){
            if(c=='/'){
                if(!temp.empty()){
                    if(temp==".."){
                        if(!st.empty()){
                            st.pop();
                        }
                    }
                    else if (temp!="."){
                        st.push(temp);
                    }
                    temp="";
                }
            }
            else{
                temp+=c;
            }
        }
        if(!temp.empty()){
            if(temp==".."){
                if(!st.empty()) st.pop();
            }
            else if (temp!=".")st.push(temp);
        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }   
        if(ans.empty()) return "/";
        return ans;

    }
};
