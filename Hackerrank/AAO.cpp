void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges,int m,int n) {
    int coutApples = 0;
    int coutOranges = 0;
    int position;
    for(int i = 0;i < m;i++){
        position = apples[i] + a;
        if(position >= s && position <= t)
            coutApples++;
    }
    for(int j = 0;j < n;j++){
        position = oranges[j] + b;
        if(position >= s && position <= t)
            coutOranges++;
    }
    cout << coutApples << endl;
    cout << coutOranges;

}