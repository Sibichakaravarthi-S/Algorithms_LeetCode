class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,area=INT_MIN;
        while(left<right){
            if(height[left]<=height[right]){             
                if(height[left]*(right-left)>area)
                    area=height[left]*(right-left);
            left++;
            }
            else{
                if(height[right]*(right-left)>area)
                    area=height[right]*(right-left);
            right--;
            }
        }
        return area;
    }
};