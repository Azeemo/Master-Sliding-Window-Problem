
// lEETCODE MEDIUM QUESTION https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int , int > check;
        long long int sum =0;
        long long int ans =0;
        for(int i=0;i<k-1;i++){
               sum +=nums[i];
               check[nums[i]]++;
        }
       for(int i=k-1;i<nums.size();i++){
           check[nums[i]]++;
            sum +=nums[i];
            if(check.size()==k){
                ans = max(ans,sum);
            }
            if(check[nums[i-k+1]]==1){
               check.erase(nums[i-k+1]);
            }
            else{
                check[nums[i-k+1]]--;
            }
            sum= sum -nums[i-k+1];
       }
       return ans;
      
    }
};
