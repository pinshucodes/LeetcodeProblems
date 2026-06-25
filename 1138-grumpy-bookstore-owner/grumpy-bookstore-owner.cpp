class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int val = 0;
        int maxVal=0;
        int k = minutes;
        int n = customers.size();
        int m = grumpy.size();
        for (int i = 0; i < n; i++) {
            if(grumpy[i]==0)
            val+=customers[i];
        }

        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)
            val+=customers[i];
        }
        maxVal = max(maxVal,val);

        for(int i=k;i<n;i++){
            if(grumpy[i-k]==1){
                val-=customers[i-k];
            }
            if(grumpy[i]==1){
                val+=customers[i];
            }
            maxVal = max(maxVal,val);
        }
        return maxVal;
    }
};