class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(i+1<s.size()&&s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }
                if(!st.empty()){
                    st.pop();
                }
                else{
                    ans++;
                }
            }
        }
        return ans+2*st.size();
        
    }
};