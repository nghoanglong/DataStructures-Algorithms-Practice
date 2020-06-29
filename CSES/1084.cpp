#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;

int main(){
    ll n, m , k; cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    for(ll i = 0;i < n;i++) cin >> a[i];
    for(ll i = 0;i < m;i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll it_a = 0, it_b = 0, ans = 0;
    while(it_a < n && it_b < m){
        if(b[it_b] < a[it_a] - k){
            ++it_b;
        }
        else if(b[it_b] > a[it_a] + k){
            ++it_a;
        }
        else{
            ++it_a, ++it_b, ++ans;
        }
    }
    cout << ans;
}