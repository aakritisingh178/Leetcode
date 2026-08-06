class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int n = nums.size(),ans=0;
      if(n==1) return 0;
      for(int i = 1;i<n;i++){
        int j = i+1;
        if(nums[i-1] < nums[i]){
           ans =i;
           if(j<n){
            if(nums[i]>nums[j]) return i;
         }
        }
        else continue;
        
      }
      return ans;  
    }
};