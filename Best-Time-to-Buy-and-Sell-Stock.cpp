1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n =prices.size();
5        int buy=INT_MAX;
6        int max_profit;
7        int profit=0;
8        for(int i=0;i<n;i++)
9        {
10            buy=min(buy,prices[i]);
11            profit=prices[i]-buy;
12            max_profit=max(max_profit,profit);
13        }
14        if(max_profit<=0)
15        {
16            return 0;
17        }
18        return max_profit;
19    }
20};