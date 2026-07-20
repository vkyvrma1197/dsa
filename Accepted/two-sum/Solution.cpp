class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Approach :- O(n^2)
        // vector<int>res(2);
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //         res[0]=i;
        //         res[1]=j;
        //         }
        //     }
        // }
        // return res;

        // Approach :- O(n)
        // int n= nums.size();
        // map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     int remaining = target - nums[i];
        //     if(mp.find(remaining) != mp.end()){
        //         return {mp[remaining] , i};
        //     }
        //     mp[nums[i]] = i;
        // }
        // return {};

        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining] , i};
            }
            mp[nums[i]] = i;
        }
        return {};

        //  for(int i=0;i<nums.size();i++){
        //      for(int j=i+1;j<nums.size();j++){
        //          if(nums[i]+nums[j]==target){
        //             return {i,j};
        //          }
        //      }
        //  }
        //  return {-1,-1};
    }
};