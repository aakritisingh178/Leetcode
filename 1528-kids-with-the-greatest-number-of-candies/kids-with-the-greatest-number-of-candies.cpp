class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>ans;
        int sum = INT_MIN,n = candies.size();
        for(int i =0;i<n;i++){
            if(candies[i]>sum)
            sum = candies[i];
        } 
        for(int i=0;i<n;i++){
            int a = 0;
          a = candies[i] + extraCandies;
         if( a >=sum)
            ans.push_back(true);
         else 
            ans.push_back(false);
        }
    return ans;
    }
};