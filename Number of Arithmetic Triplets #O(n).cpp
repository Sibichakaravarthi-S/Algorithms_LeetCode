class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> numsCopy(nums.begin(),nums.end());
        int count=0;
        for(int num:numsCopy){
            if(numsCopy.count(num+diff) && numsCopy.count(num+2*diff)){
                count++;
            }
        }
        return count;
    }
};