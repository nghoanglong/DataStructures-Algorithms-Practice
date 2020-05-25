#include<iostream>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll ans = n;
        for(ll i = 1;i * i <= n;++i){
            if(n % i == 0){
                // a.b = n -> ví dụ: 27.3 = 81 hoặc 3.27 = 81 -> chọn a = 3 là min ans
                if(i <= k){
                    ans = min(ans, n / i);
                }
                if(n / i <= k){
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
}