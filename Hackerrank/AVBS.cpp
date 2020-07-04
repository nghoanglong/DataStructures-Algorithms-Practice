long aVeryBigSum(vector<long> ar,int ar_count) {
    long long int BigSum = 0;
    for(int i = 0;i < ar_count;i++){
        BigSum = BigSum + ar[i];
    }
    return BigSum;
}