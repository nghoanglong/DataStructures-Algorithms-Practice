#include<bits/stdc++.h>

using namespace std;
const int mod=1000000007;

int main(){
    int n, m, p, x;
    int minE = mod;
    cin >> n >> m >> x; //n quyển sách, m algorithms, tối thiểu x algorithms cần học

    //nhập dữ liệu theo format
    vector<vector<int> > a(n, vector<int> (m));
    vector<int> c(n);
    for(int i = 0;i < n;i++){
        cin >> c[i];
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }

    //vì giới hạn bài này nhỏ nên ta có thể sử dụng bitmask, time complexity = O(2^n.n.m)
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> u(m, 0);
        int cost = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                cost += c[i];
                for(int j = 0;j < m;j++){
                    u[j] += a[i][j];
                }
            }
        }

        bool isOK = true;
        for(int i = 0;i < m;i++){
            //nếu có một algorithms ko thỏa điểu kiện tối thiểu x thì isOk = false
            if(u[i] < x)
                isOK = false;
        }

        minE = (isOK && cost < minE) ? cost : minE; //cập nhật minE
    }

    if(minE == mod){
        cout << -1 << endl;
    }else{
        cout << minE << endl;
    }

    return 0;
}
