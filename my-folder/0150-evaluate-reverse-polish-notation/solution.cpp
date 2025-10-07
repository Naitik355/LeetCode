class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>a;
        for(string b:tokens){
            if(b!="+" && b!="-" && b!="*" && b!="/"){
                a.push(stoi(b));
            }
            if(b=="+" || b=="-" || b=="*" || b=="/"){
                int n2=a.top();
                a.pop();
                int n1=a.top();
                a.pop();
                if(b=="+") a.push(n1+n2);
                if(b=="-") a.push(n1-n2);
                if(b=="*") a.push(n1*n2);
                if(b=="/") a.push(n1/n2);
            }
        }
        return a.top();
    }
};
