int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    long int maxresult = -1;
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    for(int i = keyboards.size() - 1;i >= 0;i--){
        for(int j = drives.size() - 1;j >= 0;j--){
            if((keyboards[i] + drives[j] <= b) && (keyboards[i] + drives[j] > maxresult)){
                maxresult = keyboards[i] + drives[j];
            }
        }
    }
    return maxresult;
}
