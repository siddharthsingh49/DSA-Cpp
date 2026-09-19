class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int i=s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }
            int j=i;
            while(j>=0 && s[j]!=' '){
                j--;
            }
            if(!ans.empty()){
                ans=ans+" ";
            }
            ans=ans+s.substr(j+1,i-j);
            i=j;
        }
        string rans="";
        int t=ans.size()-1;
        while(ans[t]==' ')t--;
        for(int i=0;i<=t;i++){
            rans+=ans[i];
        }
        return rans;
        
    }

};