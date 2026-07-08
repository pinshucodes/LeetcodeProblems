class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int size=nums.size();
        unordered_set<int>st;
        for(int i=0;i<size;i++){

            int n=nums[i];
            st.insert(n);
            int rev=0;
            while(n!=0){
                int digit=n%10;
                rev=rev*10+digit;
                n=n/10;
            }
            st.insert(rev);            

        }
        return st.size();
    }
};