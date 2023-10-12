// Time complexity: O(logn)
// Space complexity: O(1)
class Solution {
public:
    int searchInsert(const vector<int>& nums, const int target) {
        int l = 0;
        int r = nums.size();

        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target) {
                return m;
            }

            if (nums[m] < target) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return l;
    }
};