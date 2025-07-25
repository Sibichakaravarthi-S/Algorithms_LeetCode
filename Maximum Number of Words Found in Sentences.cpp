class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int count=0;
        for(int i=0;i<sentences.size();i++){
            int word=0;
            for(char c:sentences[i]){
                if(c==' ')  word++;
            }
            count=max(count,word+1);
        }
        return count;
    }
};