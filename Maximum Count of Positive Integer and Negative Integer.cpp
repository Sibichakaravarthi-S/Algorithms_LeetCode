class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int negcount=negCount(nums);
        int poscount=posCount(nums);
        return max(negcount,poscount);
        
    }
    int posCount(vector<int>&nums){
        int low=0,high=nums.size()-1,mid,index=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]>0){
                index=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (index==-1)?0:nums.size()-index;
    }

    int negCount(vector<int>&nums){
        int low=0,high=nums.size()-1,mid,index=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]<0){
                index=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return (index==-1)?0:index+1;
    }
};