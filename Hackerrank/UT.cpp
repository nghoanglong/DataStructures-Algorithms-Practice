int utopianTree(int n) {
    vector<int> ans;
    ans.push_back(1);
    for(int i = 1;i <= n;i++){
        int temp;
        if(i % 2 != 0){
            temp = ans[i - 1] * 2;
        }
        else{
            temp = ans[i - 1] + 1;
        }
        ans.push_back(temp);
    }
    return ans[n];

}