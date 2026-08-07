class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int count =0,store = 0,ans=INT_MIN,a=0;
     for(int i=0; i<nums.size(); i++){    
      if(nums[i]% 2 == 0){
         a=1;
        int x = nums[i];
      while(i<nums.size() && x==nums[i])
        i++,count++;
        i--;
        if(count>store){
         ans = nums[i];
      store = count;
        }
      count =0;
    }
    else continue;
    }
    if(a==0) return -1;
    else return ans;
    }
};