class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = original,n=nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==ans){
                ans *= 2;
                i = -1;
            }
        }
        return ans;
    }
};