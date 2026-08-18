class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIdex; // num -> idx

        for(int i = 0; i < nums.size(); ++i){
            int diff = target - nums[i];
            if(numToIdex.find(diff) != numToIdex.end()){
                return {numToIdex[diff], i};
            }
            numToIdex.insert({nums[i],i});
        }
        return {};
    }
};
