class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
 
        return {searchBound(nums,target,true),searchBound(nums,target,false)};
        }

    int searchBound(vector<int>& nums, int target,bool choice){
        int low=0,high=nums.size()-1,mid,index=-1;

        while(low<=high){
            mid=low+(high-low)/2;

            if(nums[mid]==target){
                    index=mid;
                    if(choice)  high=mid-1;
                    else    low=mid+1;

            }
            else if(nums[mid]>target)   high=mid-1;
            else    low=mid+1;

        }
        return index;
    }
};