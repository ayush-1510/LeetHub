class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=-1;

        while (low<=high)
        {
            int mid=(low+high)/2;
            if (nums[mid]==target) return mid;

            //right half
            if (nums[mid]<nums[0])
            {
                if (target<nums[mid] || target>=nums[0]) high=mid-1;
                else low=mid+1;
            }

            //left half
            else 
            {
                if (target>nums[mid] || target<nums[0]) low=mid+1;
                else high=mid-1;
            }
        }

        return -1;
    }
};