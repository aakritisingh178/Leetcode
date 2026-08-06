class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
       if(n==1) return nums[0];
       sort(nums.begin(),nums.end());
       int count =1,ans=0,store=0;
       int a = nums[0];
       for(int i =1;i<n;i++){
        if(a == nums[i]){
            count++;
            store = max(store,count);
            if(count>=store) ans = nums[i];
        }
        else{
            a = nums[i];
            count =1;
        }
       }
       return ans; 
    }
};