vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    int n=A.size();
    long long actual_sum=(n*(n+1))/2;
    long long actual_ssum=(n*(n+1)*((2*n)+1))/6;
    
    long long expected_sum=0;
    long long expected_ssum=0;
    
    for(int num:A){
        expected_sum+=num;
        expected_ssum+=(num*num);
    }
    
    long long diff=actual_sum-expected_sum;
    long long sdiff=actual_ssum-expected_ssum;
    
    long long sum=(sdiff/diff);
    
    long long repeatnum=(sum+diff)/2;
    long long missing=(sum-diff)/2;
    
    return {missing,repeatnum};
    
}
