class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(char c:s){
            if(c=='('){
                if(count>0){
                    ans=ans+c;
                }
                count++;
            }
            else{
                count--;
                if(count>0){
                    ans=ans+c;
                }
            }
        }
        return ans;
        
    }
};