class Solution {
public:
    int countDigits(int num) {
        int copy=num,count=0;
        while(num!=0){
            int rem=num%10;
            if(copy%rem==0) count++;
            num/=10;
        }
        return count;
    }
};