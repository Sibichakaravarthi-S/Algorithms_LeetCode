class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // Step 1: Encode pairs into single integers
        for(int i = 0; i < n; i++) {
            nums[i] = (nums[i] << 10) | nums[i + n];
        }
        
        // Step 2: Decode and place in final positions
        for(int i = n - 1; i >= 0; i--) {
            nums[2 * i + 1] = nums[i] & 1023;        // Extract y[i]
            nums[2 * i] = nums[i] >> 10;             // Extract x[i]
        }
        
        return nums;
    }
};