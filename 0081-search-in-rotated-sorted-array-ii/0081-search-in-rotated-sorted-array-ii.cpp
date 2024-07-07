class Solution {
public:
    bool search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int l = 0;
        int r = nums.size() - 1;
        
        while(l <= r)
        {
            int mid = (r+l) / 2;
            if (nums[mid] == target)
                return true;
            if((nums[l] == nums[mid]) && (nums[r] == nums[mid]))
            {
                l++;
                r--;
            }
            else if(nums[l] <= nums[mid])
            {
                if((nums[l] <= target) && (nums[mid] > target))
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                if((nums[mid] < target) && (nums[r]>= target))
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return false;
    }
};