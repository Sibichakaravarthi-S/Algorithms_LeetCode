class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0);
        int low=0,high=n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[low])>abs(nums[high])){
                result[i]=(nums[low]*nums[low]);
                low++;
            }
            else{
                result[i]=(nums[high]*nums[high]);
                high--;
            }

        }
        return result;
    }
};