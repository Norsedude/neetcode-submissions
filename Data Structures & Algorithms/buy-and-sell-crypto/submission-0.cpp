class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1; // 2 pointers
                                    // left buying right sell

        int max_profit = 0;      // default profit value
        while (right < prices.size()) {
            if (prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                max_profit = max(max_profit, profit);
            }
            else {
                left = right;       //shifting pointer
            }
            right++;
        }

        return max_profit;
    }
};
