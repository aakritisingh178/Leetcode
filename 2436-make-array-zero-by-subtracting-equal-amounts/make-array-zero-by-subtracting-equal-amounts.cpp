class Solution {
public:
    int minimumOperations(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int n =nums.size();
     int count=0,i;
     for(int i =0;i<n ; i++){
      if(nums[i] == 0){
        int x = nums[i];
        while(i<n && x == nums[i])
        i++;
      }
      if(i==n) return count;
      int a = nums[i];
      for( int j =i;j<n;j++){
        nums[j] = nums[j]-a;
      }
      count++;
      i =0;
     } 
     return count;  
    }
};