class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left=0,newLeft=0,index=0;
        while(left<word.length()){
            if(ch==word[left]){
                index=left;
                break;
            }
            left++;
        }
        while(newLeft<index){
            swap(word[newLeft],word[index]);
            newLeft++;
            index--;
        }
        return word;
    }
};