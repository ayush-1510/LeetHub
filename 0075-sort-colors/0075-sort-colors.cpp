class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ct0=0, ct1=0, ct2=0;
        for (auto i:nums)
        {
            if (i==0) ct0++;
            else if (i==1) ct1++;
            else ct2++;
        }

        for (int i=0; i<nums.size(); i++)
        {
            if (ct0)
            {
                nums[i]=0;
                ct0--;
            }
            else if (ct1)
            {
                nums[i]=1;
                ct1--;
            }
            else 
            {
                nums[i]=2;
                ct2--;
            }
        }
    }
};