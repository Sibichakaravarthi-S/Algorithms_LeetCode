class Solution {
public:
    int balancedStringSplit(string s) {
        int l_count=0,r_count=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R')   r_count++;
            else   l_count++;

            if(r_count==l_count){
                ++count;
                r_count=0;
                l_count=0;
            }
        }
        return count;
    }
};