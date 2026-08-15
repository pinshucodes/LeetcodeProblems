class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1=nums[0],idx=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max1)
            {
                max1=nums[i];
                idx=i;
            }
        }
        int max2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(i==idx)
            continue;
            if(nums[i]>max2)
            max2=nums[i];
        }
        if(max1>=(2*max2))
        return idx;
        else return -1;
    }
};