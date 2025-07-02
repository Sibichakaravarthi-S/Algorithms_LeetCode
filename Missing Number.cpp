class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsSum;
        for(int i=0;i<nums.size();i++){
            numsSum+=nums[i];
        }
        int max=nums.size();
        int sum=(max*(max+1))/2;
        return sum-numsSum;
    }
};