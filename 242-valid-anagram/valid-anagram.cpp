class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>alpha(26,0);
       vector<int>arr(26,0);
       for(int i =0;i<s.size();i++){
        alpha[s[i]-'a']++;
       }
       for(int i =0;i<t.size();i++){
        arr[t[i]-'a']++;
       } 
       for(int i=0;i<26;i++){
        if(arr[i] != alpha[i])
        return false;
       }
       return true;
    }
};