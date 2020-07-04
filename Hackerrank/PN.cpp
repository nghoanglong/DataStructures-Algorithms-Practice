int pickingNumbers(vector<int> a) {
    vector<int> temp(100,0);
    int sum, result = 0;
    int max = a[0];
    for(int i = 0;i < a.size();i++){
        temp[a[i]]++;
        max = (max < a[i]) ? a[i] : max;
    }
    for(int i = 2;i <= max;i++){
        sum = temp[i] + temp[i - 1];
        result = (result < sum) ? sum : result;
    }
    return result;
}
