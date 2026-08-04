class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       int n= nums.size(),store=INT_MIN,val=INT_MAX;
       if(n==1) return true;
       int first = nums[0];
       int last = nums[n-1];
       if(last>=first){
        for(int i =0;i<n;i++){
            if(nums[i]>=store)
                store = nums[i];  
            else
             return false;
        }
        return true;
       }
      else{
        for(int i=0;i<n;i++){
            if(nums[i]<=val)
            val = nums[i];
            else
            return false;
        }
        return true;
      }
        
    }
};