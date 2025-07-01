class Solution {
public:
    string clearDigits(string s) {
        stack<char> mystack;
        string newString;

        for(int i=0;i<s.length();i++){
           if(s[i]>='0' && s[i]<='9'){
                if(!mystack.empty())
                    mystack.pop();
           }
           else{
           mystack.push(s[i]);}
        }
        while(!mystack.empty()){
            newString=mystack.top()+newString;
            mystack.pop();
        }

        return newString;
    }
};