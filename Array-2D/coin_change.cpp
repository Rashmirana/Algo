class Solution {
public:
    int helper(int i, vector<int> coins, int amount)
    {
        if(amount == 0)
            return 0;
        
        if(i < coins.size() && amount > 0)
        {
            int max = amount/coins[i];
            int min = INT_MAX;
            
            for(int x = 0; x <= max; x++)
            {
                if(amount >= x*coins[i])
                {
                    int res = helper(i + 1, coins, amount - x*coins[i]);
                    if(res != -1)
                    min = min < res+x ? min: res+x; 
                }
            }
            return min == INT_MAX ? -1: min;   
        }
        return -1;
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        return helper(0, coins, amount);
    }
};
