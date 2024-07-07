class Solution {
public:

    int recur(int s, int e, vector<int> &nums, int target)
    {
        if (s>e) return -1;

        int mid=(s+e)/2;
        if (nums[mid]==target) return mid;
        else if (nums[mid]<target) return recur(mid+1, e, nums, target);
        else return recur(s, mid-1, nums, target);
    }

    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        
        return recur(s, e, nums, target);
    }
};