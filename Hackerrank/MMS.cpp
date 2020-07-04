void miniMaxSum(vector<int> arr) {
    long long eachSum[5],max,min;
    for(int i = 0;i < 5;i++){
        long long sum = 0;
        for(int j = 0;j < 5;j++){
            if(j != i){
                sum += arr[j];
            }
        }
        eachSum[i] = sum;
    }
    max = min = eachSum[0];
    for(int i = 0;i < 5;i++){
        max = (max <= eachSum[i]) ? eachSum[i] : max;
        min = (min >= eachSum[i]) ? eachSum[i] : min;
    } 
    cout << min << " " << max;

}
