class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=1;
        int buy=0;
        int max=0;
        int profit=0;

        while(sell!=prices.size()){
            int curr=prices[sell]-prices[buy];
            if(curr>profit){
                profit=curr;
                sell++;
            }    
            else if(prices[sell] < prices[buy]){
                buy=sell;
                sell++;
            }
            else{
                sell++;
            }
        }

        return profit;

    }
};