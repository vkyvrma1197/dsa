class Solution {
public:
    int function(vector<int>&nums , int goal){
        int left = 0 , right = 0 , sum = 0 , count = 0;
        int n = nums.size();

        if(goal < 0) return 0;

        while(right < n){
            sum += nums[right];
            while(sum > goal){
                sum = sum - nums[left];
                left++;
            }
            count = count + (right - left + 1);
            right++;
        }
        return count;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int totalSubarray = function(nums , goal) - function(nums , goal - 1);

        return totalSubarray;
    }
};