class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }

        for(int i=0;i<k;i++){
            auto [value,index]=pq.top();
            pq.pop();

            nums[index]=value*multiplier;
            pq.push({nums[index],index});
        }
        return nums;
    }
};