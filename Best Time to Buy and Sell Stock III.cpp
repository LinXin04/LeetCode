class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        if(n<2) return 0;
        vector<int> f(n,0);
        vector<int> g(n,0);
        int profit=0;

        for(int i=0,cur_value1=prices[0];i<n;i++)
        {
            cur_value1=min(cur_value1,prices[i]);
            f[i]=max(f[i-1],prices[i]-cur_value1);
        }
        for(int j=n-2,cur_value2=prices[n-1];j>=0;j--)
        {
            cur_value2=max(cur_value2,prices[j]);
            g[j]=max(g[j],cur_value2-prices[j]);
        }
        for(int i=0;i<n;i++)
            profit=max(profit,f[i]+g[i]);
        return profit;
       
    }
};
