class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char , int >mpp;
        for(auto c : t){
            mpp[c]++;
        }
        int left = 0 , right = 0 , minLen = INT_MAX , sIndex = -1 , count = 0;
        int n = s.size() , m = t.size();

        while(right < n){
            if(mpp[s[right]] > 0){
                count++;
            }
            mpp[s[right]]--;
            
            while(count == m){
                if(right - left + 1 < minLen){
                    minLen = right - left + 1 ;
                    sIndex = left;
                }
                mpp[s[left]]++;
                if(mpp[s[left]] > 0){
                    count--;
                }
                left++;
            }
            right++;
        }
        return (sIndex == -1) ? "" : s.substr(sIndex , minLen);
    }
};