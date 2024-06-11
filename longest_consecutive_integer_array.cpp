class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
    if (nums.empty()) return 0;

    std::unordered_map<int, bool> numMap;
    
    // Initialize the map with each number set to false (not visited)
    for (int num : nums) {
        numMap[num] = false;
    }

    int longestStreak = 0;

    for (int num : nums) {
        // If num is not visited yet, start a sequence from num
        if (!numMap[num]) {
            numMap[num] = true;
            int currentStreak = 1;

            // Check consecutive elements to the right
            int currentNum = num;
            while (numMap.find(currentNum + 1) != numMap.end() && !numMap[currentNum + 1]) {
                numMap[currentNum + 1] = true;
                currentNum += 1;
                currentStreak += 1;
            }

            // Check consecutive elements to the left
            currentNum = num;
            while (numMap.find(currentNum - 1) != numMap.end() && !numMap[currentNum - 1]) {
                numMap[currentNum - 1] = true;
                currentNum -= 1;
                currentStreak += 1;
            }

            longestStreak = std::max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}
};
