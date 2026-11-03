class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int suffix=1;
        int res=nums[0];
        for(int i=0;i<n;i++){
            if(prefix==0)
                prefix=1;
            
            if(suffix==0)
                suffix=1;
            
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-1-i];
            res=max({res,prefix,suffix});
        }
        return res;
    }
};