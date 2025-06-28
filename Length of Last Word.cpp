class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=s.length()-1,len=0;
        while(start>=0){
            if(s[start]!=' ')
                len++;
            else{
                if(len>0)
                    break;
            }
            start--;
        }
        return len;
    }
};