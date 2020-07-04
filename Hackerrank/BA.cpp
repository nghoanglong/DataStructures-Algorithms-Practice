void bonAppetit(vector<int> bill, int k, int b) {
    int result,sum = 0;
    for(int i = 0;i < bill.size();i++){
        if(i != k){
            sum = sum + bill[i];
        }
    }
    sum = sum / 2;
    result = b - sum;
    if(result == 0){
        cout << "Bon Appetit";
    }
    else
        cout << result;

}
