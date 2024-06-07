
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    std::vector<int> result(n, 1);

    // Step 1: Calculate left products and store them in the result array
    int leftProduct = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Step 2: Calculate right products and multiply them with the left products in the result array
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
    }
};
