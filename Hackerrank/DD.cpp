int diagonalDifference(vector<vector<int>> arr,int n) {
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i < n;i++){
        int j = i;
        sum1 = sum1 + arr[i][j];
    }
    int tempt = n - 1;
    for(int j = 0;j < n;j++){
        sum2 = sum2 + arr[tempt--][j];
    }
    cout << sum2 << endl;
    return abs(sum1 - sum2);
}