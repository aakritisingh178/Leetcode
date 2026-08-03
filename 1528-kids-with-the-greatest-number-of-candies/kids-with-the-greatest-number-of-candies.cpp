class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>ans;
        int sum = INT_MIN;
        int n = candies.size();
        for(int i =0;i<n;i++){
            if(candies[i]>sum)
            sum = candies[i];
        }
        
        for(int i=0;i<n;i++){
            int a = 0;
          a = candies[i] + extraCandies;
         if( a >=sum){
            bool b = true;
            ans.push_back(b);
         }
         else{
            bool c = false;
            ans.push_back(c);
         }
        }
    return ans;
    }
};