class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int left = 0 , right = 0 , maxLen = 0 , maxFreq = 0;
        while(right < s.size()){
            count[s[right] - 'A']++;
            maxFreq = max(maxFreq , count[s[right] - 'A']);

            int windowSize = right - left + 1;
            if(windowSize - maxFreq > k){
                count[s[left] - 'A']--;
                left++;
            }
            else if (windowSize - maxFreq <= k){
                maxLen = max(maxLen , windowSize);
            }
            right++;
        }
        return maxLen;
    }
};