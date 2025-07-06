class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
       while(num>0){
        count++;
        (num%2)?num-=1:num/=2;
       }
       return count;
    }
};