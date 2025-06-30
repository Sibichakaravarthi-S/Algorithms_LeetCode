class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,element=nums[0];
        for(int i=1;i<nums.size();i++){
            if(element==nums[i]){
                count++;
            }
            else{
                --count;
                if(count==0){
                    element=nums[i];
                    count++;
                }
            }
        }
        return element;
    }
};