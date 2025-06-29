class Solution {
public:
    string reverseVowels(string s) {
        string reversedString;
        int left=0,right=s.length()-1;
        
        while(left<right){
            char leftvar=tolower(s[left]),rightvar=tolower(s[right]);
            bool leftvow=(leftvar=='a' || leftvar=='e' || leftvar=='i' || leftvar=='o' || leftvar=='u'),rightvow=(rightvar=='a' || rightvar=='e' || rightvar=='i' || rightvar=='o' || rightvar=='u');
            if(leftvow && rightvow){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(leftvow && !rightvow)
                right--;
            else if(!leftvow && rightvow)
                left++;
            else{
                left++;
                right--;
            }
        }
        return s;
    }
};