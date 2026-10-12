class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int i,j,k,sum=0;
        int n = arr.size();
        for(k=0;k<n;k++){
            for(i=k;i<n;i= i+2){
                for(j =k ; j<=i;j++){
                    sum = sum+arr[j];
                }
            }
        }
        return sum;
    }
};