class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int sum =0,count=0,ans;
        int n = nums.size();
         for(int i =0;i<n;i++){
            if(nums[i]<0) sum++;
            else if(nums[i]==0) continue;
            else count++;
         }
    ans = max(sum,count);
    return ans;
    }
};