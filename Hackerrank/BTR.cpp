vector<int> breakingRecords(vector<int> scores,int n) {
    int highest = 0;
    int lowest = 0;
    int max = scores[0];
    int min = scores[0];
    vector<int> result;
    for(int i = 0;i < n;i++){
        if(max < scores[i]){
            max = scores[i];
            highest++;
        }
        if(min > scores[i]){
            min = scores[i];
            lowest++;
        }
    }
    result.push_back(highest);
    result.push_back(lowest);
    return result;

}
