class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        heights.push_back(0);
        int ans=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty()&& heights[st.top()]>heights[i]){
                int h=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }
                int area=h*width;
                ans=max(area,ans);
            }
            st.push(i);
        }
        return ans;
        
    }
};