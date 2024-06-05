class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        std::map<string, vector<string>> temp;

        for(auto it:strs) {
            string curr = it;
            string tempo = curr;
            sort(tempo.begin(), tempo.end());
            temp[tempo].push_back(curr);
        }

        for (auto item: temp) {
            ans.push_back(item.second); // Add each group of anagrams to the result
        }

        return ans;


    }
};
