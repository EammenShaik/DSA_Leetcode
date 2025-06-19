class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n); 
        int left = 0;
        int right = n - 1;
        int index = n - 1; 

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                ans[index] = leftSq;
                left++;
            } else {
                ans[index] = rightSq;
                right--;
            }
            index--;
        }

        return ans;
    }
};
