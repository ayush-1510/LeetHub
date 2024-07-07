class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while (s<e)
        {
            int mid=(s+e)/2;
            if (target>=nums[s] && target<=nums[mid])
            e=mid;
            else
            s=mid+1;
        }

        if (nums[s]==target)
        return s;
        return -1;
    }
};