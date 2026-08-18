class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int ans,i,j;
        int n = prices.size();
        for(i =0;i<n;i++){
            for(j=i+1; j<n ;j++){
                if(prices[j] <= prices[i]){
                    ans = prices[i]- prices[j];
                    prices[i]= ans;
                    break;
                }
            }
        }
        return prices;
    }
};