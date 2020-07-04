int birthday(vector<int> arr, int day, int month,int n) {
    int result = 0;
    for(int i = 0;i < n;i++){
        int tempt = i;
        int sum = 0;
        for(int j = 1;j <= month;j++){
            sum += arr[tempt++];
        }
        if(sum == day){
            result++;
        }
        if((n - (i + 1)) < month)
            break;
    }
    return result;
}
