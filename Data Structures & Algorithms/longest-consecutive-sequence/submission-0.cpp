class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        for (int num: set){
            if(set.find(num-1) == set.end()){
                int len = 1;
                while(set.find(num+len)!= set.end()){
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
