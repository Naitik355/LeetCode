class Solution {
    public String removeKdigits(String num, int k) {
        if(num.length()==k) return "0";
        StringBuilder temp=new StringBuilder();
        Stack<Character>st=new Stack<>();
        for(char c:num.toCharArray()){
            while(k>0 && !st.isEmpty() && st.peek()>c){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.isEmpty()){
            temp.append(st.pop());
        }
        String ans=temp.reverse().toString();
        int i=0;
        while(i<ans.length() && ans.charAt(i)=='0') i++;
        ans=ans.substring(i);
        if(ans.length()==0) return "0";
        return ans;
    }
}