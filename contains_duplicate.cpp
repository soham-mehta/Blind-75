class Solution {
public:
    bool containsDuplicate(vector<int> nums) {
        
        std::unordered_set<int> set;

        for(int i = 0; i < nums.size(); i++) {
            if(set.contains(nums[i])) {
                return true;
            }

        set.insert(nums[i]);
        }
        return false;
    }
};
