class Solution {
public:
    int dominantIndex(vector<int>& nums) {
      int sum = INT_MIN,n = nums.size(),index=0;
      for(int i =0;i<n;i++){
        if(nums[i] > sum){
            sum = nums[i]; 
            index = i;
        }
      }
      int a=1;
      for(int i =0;i<n;i++){
        if(nums[i]*2 <= sum && i!= index)
            continue;
        else{
        if(i!= index)
        a = 0;
        }
      }
      if(a == 0 )
      return -1;
      else
      return index;
    }
};