class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res=0;
        int s=0;
        int e=nums.size()-1;
        if (nums[0]>target) return 0;

        while (s<=e)
        {
            int mid=(s+e)/2;
            if (nums[mid]==target) return mid;
            else if (nums[mid]<target) {res=mid; s=s+1;} 
            else e=mid-1;
        }
        
        return res+1;
    }
};