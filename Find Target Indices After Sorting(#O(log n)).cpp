class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> indices;
        sort(nums.begin(),nums.end());
        int left=findLeft(nums,target);
        if(left==-1) return indices;

        int right=findRight(nums,target);

        for(int i=left;i<=right;i++){
            indices.push_back(i);
        }
        
        return indices;
    }

    int findLeft(vector<int>& nums,int target){
        int low=0,high=nums.size()-1,mid,result=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                result=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return result;
    }

    int findRight(vector<int>& nums,int target){
        int low=0,high=nums.size()-1,mid,result=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                result=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return result;
    }

};