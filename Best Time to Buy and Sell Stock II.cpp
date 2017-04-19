class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            int diff_pro=prices[i]-prices[i-1];
            if(diff_pro>0) profit+=diff_pro;
        }
        return profit;
    }
};
