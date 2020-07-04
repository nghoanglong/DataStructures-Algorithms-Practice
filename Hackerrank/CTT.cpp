vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ketqua(2,0);
    for(int i = 0;i < 3;i++){
        if(a[i] > b[i]){
            ketqua[0]++;
        }
        else if(b[i] > a[i]){
            ketqua[1]++;
        }
    }
    return ketqua;
}