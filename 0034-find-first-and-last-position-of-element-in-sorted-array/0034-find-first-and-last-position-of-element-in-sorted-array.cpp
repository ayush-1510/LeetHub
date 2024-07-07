class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (target == nums[mid]) {
                int left = mid;
                int right = mid;

                while (left > 0 && nums[left - 1] == target) {
                    left--;
                }
                while (right < nums.size() - 1 && nums[right + 1] == target) {
                    right++;
                }

                return {left, right};
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};
