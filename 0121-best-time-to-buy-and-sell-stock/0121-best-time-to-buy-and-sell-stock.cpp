class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int bestbuy=INT_MAX;
        for(int price:prices){
            bestbuy=min(bestbuy,price);
            maxProfit=max(maxProfit,price-bestbuy);
        }
        return maxProfit;
    }
};