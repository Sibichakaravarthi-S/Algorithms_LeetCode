class Solution {
public:
    string smallestNumber(string pattern) {
        int n=pattern.length(),num=1;
        string result="";
        stack<int> st;

        for(int i=0;i<=n;i++){
            st.push(num++);

            if(i==n || pattern[i]=='I'){
                while(!st.empty()){
                    result+=(char)('0'+st.top());
                    st.pop();
                }
            }
        }
        return result;
    }
};