class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
        int ans=0;
        int mid=n/2;
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-nums[mid]);
        }
        return ans;
        
    }
};