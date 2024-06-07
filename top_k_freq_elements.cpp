class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::map<int, int> numCount;
         for (int num : nums) {
            if (numCount.find(num) != numCount.end()) {
                // If the key exists, increment the value
                numCount[num]++;
            } else {
            numCount[num] = 1;
            }
        }

        std::vector<std::pair<int, int>> countVec(numCount.begin(), numCount.end()); 

        std::sort(countVec.begin(), countVec.end(), compareByValue);

        std::vector<int> result;    
        for (int i = 0; i < k && i < countVec.size(); ++i) {        
            result.push_back(countVec[i].first);    
        }

        return result;

        
        
    }

    static bool compareByValue(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second;
}
};
