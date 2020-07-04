int birthdayCakeCandles(vector<int> ar,int n) {
    long long max = ar[0];
    int dem = 1;
    for(int i = 1;i < n;i++){
        if(max == ar[i]){
            dem++;
        }
        else if(max < ar[i]){
            max = ar[i];
            dem = 1;
        }
    }
    return dem;
}