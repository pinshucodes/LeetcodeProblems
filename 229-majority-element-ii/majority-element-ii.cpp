class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {

        int major1 = 0, major2 = 0;
        int count1 = 0, count2 = 0;

        for (int num : nums) {

            if (num == major1)
                count1++;

            else if (num == major2)
                count2++;

            else if (count1 == 0) {
                major1 = num;
                count1 = 1;
            }

            else if (count2 == 0) {
                major2 = num;
                count2 = 1;
            }

            else {
                count1--;
                count2--;
            }
        }

        int freq1 = 0, freq2 = 0;

        for (int num : nums) {

            if (num == major1)
                freq1++;

            else if (num == major2)
                freq2++;
        }

        vector<int> ans;

        if (freq1 > nums.size() / 3)
            ans.push_back(major1);

        if (freq2 > nums.size() / 3)
            ans.push_back(major2);

        return ans;
    }
};