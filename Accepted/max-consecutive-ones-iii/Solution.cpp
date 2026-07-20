class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // Brute Force ( TLE ) -> TC - (N*N)
        // int n = nums.size();
        // int maxLen = 0;
        // for(int i=0;i<n;i++){
        //     int countZero = 0;
        //     for(int j = i;j<n;j++){
        //         if(nums[j] == 0){
        //             countZero++;
        //         }
        //         if(countZero <=k){
        //             maxLen = max(maxLen , j - i + 1 );
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return maxLen;

        // Better Approach (TLE) -> TC - (2N)
        int left = 0 , right = 0 , maxLen = 0;
        int n = nums.size();
        int countZero = 0;
        while(right < n ){
            if(nums[right] == 0) {
                countZero++;
            }
            while(countZero > k){
                if(nums[left] == 0){
                    countZero--;
                 
                }
                left++; 
            }
            if(countZero <= k){
                maxLen = max(maxLen , right - left + 1);
            }
            right++;
        }        
        return maxLen;

        // Optimal Approach 

        // int left = 0 , right = 0 , maxLen = 0;
        // int n = nums.size();
        // int countZero = 0;
        // while(right < n ){
        //     if(nums[right] == 0) {
        //         countZero++;
        //     }
        //     if(countZero > k){
        //         if(nums[left] == 0){
        //             countZero--;
        //         }
        //         left++;
        //     }
        //     if(countZero <= k){
        //         int len = right - left + 1;
        //         maxLen = max(maxLen , len);
        //     }
        //     right++;
        // }        
        // return maxLen;
    }
};