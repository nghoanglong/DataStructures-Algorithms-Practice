int divisibleSumPairs(int n, int k, vector<int> arr) {
    int dem = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(j > i && ((arr[i] + arr[j]) % k == 0)){
                dem++;
            }
        }
    }
    return dem;
}