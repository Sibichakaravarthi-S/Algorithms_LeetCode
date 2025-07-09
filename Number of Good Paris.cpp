class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int low=0,high=low+1,count=0,num;
        while(high<nums.size()){
            if(nums[low]==nums[high]){
                high++;
            }
            else{
                num=high-low-1;
                count+=(num*(num+1))/2;
                low=high;
                high=low+1;

            }
        }
        num=high-low-1;
        count+=(num*(num+1))/2;
        return count;
    }
};