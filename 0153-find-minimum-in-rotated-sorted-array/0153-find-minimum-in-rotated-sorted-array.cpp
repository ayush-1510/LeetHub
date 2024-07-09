class Solution {
public:
    int findMin(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int s=0;
        int e=nums.size()-1;
        int ind=0;

        while (s<e)
        {
            int m = s+(e-s)/2;
            if(nums[m] > nums[e]) s=m+1;          // left side has small values (rotated array)
            else if(nums[m] < nums[e]) e=m;       // right side has small value (not rotated)
            else e--;
        }
        return nums[e];  //s and e wil be same
    }
};