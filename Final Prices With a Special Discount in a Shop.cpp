class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result=prices;
        stack<int> st;

        for(int i=0;i<prices.size();i++){

            while(!st.empty() && prices[i]<=prices[st.top()]){
                int temp=st.top();
                st.pop();
                result[temp]=prices[temp]-prices[i];
            }
            st.push(i);
        }
        return result;
    }
};