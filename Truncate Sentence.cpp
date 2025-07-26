class Solution {
public:
    string truncateSentence(string s, int k) {
        string b;
        int count=0,i;
        for(i=0;i<s.length();i++){
            
            if(s[i]==' '){
                count++;
                if(count==k)    break;
            }
            
        }
        s.resize(i);
        return s;
    }
};