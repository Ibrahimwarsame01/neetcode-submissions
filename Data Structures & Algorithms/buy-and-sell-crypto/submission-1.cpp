class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int best = 0;
        int profit = 0;
        int min = prices[0];
        for(int i =1; i < prices.size();i++){ 
            if(prices[i] < min){
                min = prices[i];
            }
            profit = prices[i] - min; 
            if(profit > best){
                best = profit; 
            }
        }
        return best;
    }
};
