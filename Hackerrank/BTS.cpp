int UCLN2So(int x, int y)
{
    if (x % y == 0)
        return y;
    return UCLN2So(y, x % y);//dùng đệ quy tìm ƯCLN của 2 số bằng thuật toán Euclid
}
int getTotalX(vector<int> a, vector<int> b) {
    int UCNN = b[0];
    int lastresult = 0;
    int cout = 0;
    int result = 0;
    int maxa = a[0];
    for (int i = 1; i < b.size(); i++)
    {
        UCNN = UCLN2So(UCNN, b[i]);//tìm UCNN
    }
    for(int i = 0;i < a.size();i++){
        maxa = (maxa < a[i]) ? a[i] : maxa;
    }
    for(int i = maxa;i <= UCNN;i++){
        for(int j = 0;j < a.size();j++){
            if(i % a[j] == 0){
                cout++;
            }
        }
        if(cout == a.size()){
            for(int ib = 0;ib < b.size();ib++){
              if(b[ib] % i == 0){
                result++;
              }
            }
            if(result == b.size()){
              lastresult++;
            }
            result = 0;
        }
        cout = 0;
    }
  return lastresult;

}
