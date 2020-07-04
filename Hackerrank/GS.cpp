vector<int> gradingStudents(vector<int> grades,int n) {
    long double tempt;
    int host;
    vector<int> forReturn;
    for(int i = 0;i < n;i++){
        tempt = ceil(grades[i] / 5.0);
        host = tempt * 5;
        if(grades[i] >= 38){
            if((host - grades[i]) < 3){
                forReturn.push_back(host);    
            }
            else{
                forReturn.push_back(grades[i]);
            }
        }
        else
          forReturn.push_back(grades[i]);
    }
    return forReturn;
}
