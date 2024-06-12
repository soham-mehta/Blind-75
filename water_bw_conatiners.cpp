class Solution {
public:
    int maxArea(vector<int>& height) {
         int max_area = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int current_height = std::min(height[left], height[right]);
        int current_area = width * current_height;
        max_area = std::max(max_area, current_area);

        // Move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return max_area;
        
    }
};
