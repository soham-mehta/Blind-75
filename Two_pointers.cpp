class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         std::unordered_map<int, int> num_map; // To store number and its index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Return the indices
            }
            num_map[nums[i]] = i; // Store index of the current element
        }
        return {}; // If no solution is found, though the problem statement guarantees one
    }
};
