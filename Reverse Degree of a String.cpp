class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=((i+1)*(abs(s[i]-'z')+1));
        }
        return sum;
    }
};