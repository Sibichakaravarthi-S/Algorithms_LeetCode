class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        double minAvg=(nums[low]+nums[high])/2.0;
        while(low<high){
            double currentAvg=(nums[low]+nums[high])/2.0;
            minAvg=min(minAvg,currentAvg);
            low++;
            high--;
        }

        return minAvg;
    }
};