class Solution {
public:
    int function(vector<int>& nums , int k){
        int left = 0 , right = 0 , odd = 0 , count = 0;
        int n = nums.size();

        while(right < n){
            if(nums[right] % 2 == 1){
                odd++;
            }
            while(odd > k){
                if(nums[left] % 2 == 1){
                    odd--;
                }
                left++;
            }
            count = count + (right - left + 1);
            right++;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int niceSubarray = function(nums , k) - function(nums , k - 1);

        return niceSubarray; 
    }
};