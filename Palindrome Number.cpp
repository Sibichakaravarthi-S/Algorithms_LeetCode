class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            long long rev=0,rem,xx=x;
            while(x>0){
                rem=x%10;
                rev=(rev*10)+rem;
                x/=10;
            }
            return (rev==xx)?true:false;
        }
        
    }
};