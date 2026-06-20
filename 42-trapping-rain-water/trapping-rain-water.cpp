class Solution {
public:
    int trap(vector<int>& height) {
        // int left = 0;
        // int right = height.size() - 1;
        // int leftMax = height[left];
        // int rightMax = height[right];
        // int water = 0;

        // while (left < right) {
        //     if (leftMax < rightMax) {
        //         left++;
        //         leftMax = max(leftMax, height[left]);
        //         water += leftMax - height[left];
        //     } else {
        //         right--;
        //         rightMax = max(rightMax, height[right]);
        //         water += rightMax - height[right];
        //     }
        // }

        int n = height.size();

        int prev[n];
        prev[0] = height[0];

        int mx = height[0];

        for(int i=1;i<n;i++){
            mx = max(mx,height[i]);
            prev[i] = mx;
        }

        int next[n];
        next[n-1] = height[n-1];

        mx = height[n-1];

        for(int i=n-2;i>=0;i--){
            mx = max(mx,height[i]);
            next[i] = mx;
        }

        int arr[n];

        for(int i=0;i<n;i++){
            arr[i] = min(prev[i],next[i]);
        }

        int water = 0;

        for(int i=0;i<n;i++){
            water += arr[i] - height[i];
        }

        return water;
        }
};