class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer>st=new Stack<>();
        for (String s:tokens){
            if(!s.equals("+") && !s.equals("-") && !s.equals("*") && !s.equals("/")){
                st.push(Integer.parseInt(s));
            }
            else{
                int n2=st.pop();
                int n1=st.pop();
                if(s.equals("+")) st.push(n1+n2);
                if(s.equals("-")) st.push(n1-n2);
                if(s.equals("*")) st.push(n1*n2);
                if(s.equals("/")) st.push(n1/n2);
            }
        }
        return st.pop();
    }
}