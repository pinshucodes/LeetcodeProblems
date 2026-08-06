class Solution {
public:
    void rp(int s, int l, vector<int>& nums) {
        for (int i = s, j = l; i < j; i++, j--) {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        return;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rp(0, n - k - 1, nums);
        rp(n - k, n - 1, nums);
        rp(0, n - 1, nums);
    }
};