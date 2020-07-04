int sockMerchant(int n, vector<int> ar, vector<int> checkresult) {
    int temp_sum,result = 0;
    vector<int>:: iterator ptr;
    ptr = max_element(ar.begin(),ar.end());

    for(int i = 0;i < n;i++){
        checkresult[ar[i]]++;
    }

    for(int j = 0;j <= *ptr;j++){
        if(checkresult[j] != 0){
        temp_sum = checkresult[j] - (checkresult[j] % 2);
        result = result + temp_sum;
        }
    }
    return result / 2;

}
