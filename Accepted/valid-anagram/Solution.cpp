class Solution {
public:
    bool isAnagram(string s, string t) {
        // Brute Force -> TC - O(nlogn) , SC -> O(1)(assuming sorting in-place), else O(n) if using additional arrays.
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        // Better Approach -> TC - O(n) , SC - O(1) if using frequency array (fixed size 26), otherwise O(n) if using unordered_map.
        // if (s.size() != t.size()) return false;

        // unordered_map<char, int> freqS, freqT;

        // for (char ch : s) freqS[ch]++;
        // for (char ch : t) freqT[ch]++;

        // return freqS == freqT;

        // Optimal Approach

        if (s.size() != t.size()) return false;

        int count[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;


        // int hash[256]={0};
        // for(int i=0;i<s.size();i++){
        //     hash[s[i]]++;
        // }
        // for(int i=0;i<t.size();i++){
        //     hash[t[i]]--;
        // }
        // for(int i=0;i<256;i++){
        //     if(hash[i] !=0){
        //         return false;
        //     }
        // }
        // return true;
    }
};