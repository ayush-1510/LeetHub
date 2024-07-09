class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        if (!e) return nums[0];
        if (nums[0]!=nums[1]) return nums[0];
        if (nums[e]!=nums[e-1]) return nums[e];

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // Debug statements to show the current state of s, e, and mid
            cout << "s: " << s << ", e: " << e << ", mid: " << mid << endl;
            cout << "nums[mid]: " << nums[mid] << endl;

            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                cout << "Found minimum at index " << mid << ": " << nums[mid] << endl;
                return nums[mid];
            }

            if (mid & 1) {
                if (nums[mid] == nums[mid + 1]) {
                    cout << "Odd index and nums[mid] == nums[mid + 1], moving e to " << mid - 1 << endl;
                    e = mid - 1;
                } else {
                    cout << "Odd index and nums[mid] != nums[mid + 1], moving s to " << mid + 1 << endl;
                    s = mid + 1;
                }
            } else {
                if (nums[mid] != nums[mid + 1]) {
                    cout << "Even index and nums[mid] != nums[mid - 1], moving e to " << mid - 1 << endl;
                    e = mid - 1;
                } else {
                    cout << "Even index and nums[mid] == nums[mid - 1], moving s to " << mid + 1 << endl;
                    s = mid + 1;
                }
            }
        }

        return 0;
    }
};