class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //main oblective is to find the max price after finding the min price.
        int profit=0,minprice=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<minprice)//to check whether prices[i] is min 
                minprice=prices[i];
            else//if not then calculating profit for it
                profit=max(profit,prices[i]-minprice);
        }
        return profit;
    }
};