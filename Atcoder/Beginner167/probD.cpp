#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
 
int main(){
    int now = 1;
    ll n, k; cin >> n >> k;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    for(int i = 1;i <= n;i++){
        cin >> b[i];
    }
    //nếu k là số lẻ, chọn đỉnh đó là đỉnh hiện tại
    //nếu k là số chẵn, thực hiện sắp xếp lại đường đi các đỉnh cho đến khi gặp k lẻ, thì chọn đó là đỉnh hiện tại
    while(k > 0){
        if(k % 2 == 1)
            now = b[now];
        for(int i = 1;i <= n;i++){
            a[i] = b[b[i]];
        }
        for(int i = 1;i <= n;i++){
            b[i] = a[i];
        }
        k = k / 2;
    }
    cout << now;
}