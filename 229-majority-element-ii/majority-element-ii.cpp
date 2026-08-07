class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),count =0,x;
        int time = n/3;
        vector<int>ans;
        for(int i=0;i<n;i++){
           x = nums[i];
           while( i<n && x == nums[i] )
            i++,count++;    
            i--;
           if(count>time) ans.push_back(nums[i]);
           count =0;
        }
        return ans;
    }
};