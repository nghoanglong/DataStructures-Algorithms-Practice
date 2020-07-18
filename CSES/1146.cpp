#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>
#include<unordered_map>
 
using namespace std;
 
#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
/*
    Idea: ko đếm bit như thông thường là dùng vòng lặp, ta có một kỹ thuật khác nhanh hơn, xem code bên dưới
*/
unordered_map<ll, ll> cache;
 
ll presentcache(ll n){
    if(n == 0) return 0;
    if(cache[n]) return cache[n];
    ll bitLeftMost = 1;
    ll copy_n = n;
    while(copy_n >>= 1) bitLeftMost <<= 1;
    bitLeftMost = bitLeftMost - 1;
    ll slNumAtBLM = n - bitLeftMost;
    cache[n] = presentcache(bitLeftMost) + slNumAtBLM + presentcache(slNumAtBLM - 1);
    return cache[n];
}
int main(){
    ll n; cin >> n;
    ll ans = presentcache(n);
    cout << ans;
}