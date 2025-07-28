class Solution {
public:
    bool isPalindrome(const string& s){
        int low=0,high=s.length()-1;
        while(low<high){
            if(s[low]!=s[high])     return false;
            low++;
            high--;
        }
        return true;
    }


    string firstPalindrome(vector<string>& words) {
        for(const string& word:words){
            if(isPalindrome(word))  return word;
        }
        return "";
    }
};