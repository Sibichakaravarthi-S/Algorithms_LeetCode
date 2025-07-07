class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0,len;
        for(int i=0;i<grid.size();i++){
            len=findIndex(grid[i]);
            count=(len==-1)?count:count+(grid[i].size()-len);
        }
        return count;
    }
    int findIndex(vector<int>& grid){
        int low=0,high=grid.size()-1,mid,index=-1;
        while(low<=high){

            mid=low+(high-low)/2;
            if(grid[mid]<0){
                index=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return index;
    }
};