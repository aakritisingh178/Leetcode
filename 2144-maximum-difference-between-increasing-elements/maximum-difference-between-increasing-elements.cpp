class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1;
        int n = nums.size();
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a = nums[j]-nums[i];
            if(a > ans && nums[j]>nums[i] )
            ans = a ;
            }
        }
return ans;
    }
};