class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> temp;

        while(n!=1 && temp.find(n)==temp.end()){
            temp.insert(n);
            n=sumOfSquares(n);
        }
        return n==1;
    }

    int sumOfSquares(int num){
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum+=rem*rem;
            num/=10;
        }
        return sum;
    }
};