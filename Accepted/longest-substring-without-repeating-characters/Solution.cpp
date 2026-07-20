class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char , int>mp;
        int left = 0 , right = 0 , maxLen = 0;
        while(right < n){
            char currentChar = s[right];

            if(mp.find(currentChar) != mp.end() && mp[currentChar] >= left){
                left = mp[currentChar] + 1;
            }
            mp[currentChar] = right;
            maxLen = max(maxLen , right - left + 1);
            right++;
        }
        return maxLen;
   }
};