class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int secondNum=nums[i]+diff;
            int thirdNum=nums[i]+(2*diff);
            
            if(binarySearch(nums,secondNum,i+1)){
                if(binarySearch(nums,thirdNum,i+1)){
                    count++;
                }
            }
        }
        return count;
    }
    bool binarySearch(vector<int> nums,int target,int num){
        int low=num,high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)   return true;
            else if(nums[mid]<target)   low=mid+1;
            else    high=mid-1;
        }
        return false;
    }
};