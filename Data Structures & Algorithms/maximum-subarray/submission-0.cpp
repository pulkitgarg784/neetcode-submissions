class Solution {
public:
// nums = [2,-3,4,-2,2,1,-1,4]
// dp =   [2,-1,4, 2,4,5, 4,8]
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums);
        for(int i = 1; i < nums.size(); i++){
            dp[i] = max(dp[i], dp[i] + dp[i-1]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};
