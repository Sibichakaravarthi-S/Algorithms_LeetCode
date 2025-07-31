class Solution {
public:
    string reverseWords(string s) {
        
        string reversed;
        string word;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!=' '){
                word=s[i]+word;
            }
            else if(!word.empty()){
                if(!reversed.empty()){
                    reversed+=" ";
                }
                reversed+=word;
                word="";
            }
        }

        //for the last word
        if(!word.empty()){
            if(!reversed.empty()){
                reversed+=" ";
            }
            reversed+=word;
        }
        return reversed;
    }
};