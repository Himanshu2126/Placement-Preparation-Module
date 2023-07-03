class Solution {
public:
    int maxProfit(vector<int>& prices)
     {
        int profit=0, len=prices.size();
        for(int i=1; i<len; i++)
        {
            profit+=max(prices[i]-prices[i-1],0);
            
        }
        return profit;
     }
};