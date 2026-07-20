class Solution {
public:
    int function(vector<int>&nums , int k){
        int n = nums.size();
        int left = 0 , right = 0 , count = 0;
        unordered_map<int,int>mpp;
        if(k < 0) return 0;
        while(right < n){
            mpp[nums[right]]++;

            while(mpp.size() > k){
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            count = count + (right - left + 1);
            right++;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int totalSubarray = function(nums , k) - function(nums , k-1);

        return totalSubarray; 
    }
};