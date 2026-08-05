class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size();
        int first = nums[0],last = nums[n-1];
        for(int i =first;i<=last;i++){
            int count =0;
            for(int j=0;j<n;j++){
                if(nums[j]==i) count=1;
            }
            if(count == 1) continue;
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};