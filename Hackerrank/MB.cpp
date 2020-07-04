int migratoryBirds(vector<int> arr,vector<int> checkresult,int n) {
    int max,result = 0;
    for(int i = 0;i < n;i++){
        checkresult[arr[i]]++;
    }
    max = checkresult[0];
    for(int j = 0;j < n - 1;j++){
        if(max < checkresult[j]){
            max = checkresult[j];
            result = j;
        }
    }
    return result;
}