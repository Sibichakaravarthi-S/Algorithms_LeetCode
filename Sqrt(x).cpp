class Solution {
public:
    int mySqrt(int x) {
        if(x>INT_MAX || x<0) return 0;
        int low=0,high=x;
        long long sqr;
        while(low<=high){
            sqr=(low+high)/2;
            if(sqr*sqr==x){
                return sqr;
            }
            else if(sqr*sqr<x){
                low=sqr+1;
            }
            else{
                high=sqr-1;
            }
        }
        return high;
    }
};