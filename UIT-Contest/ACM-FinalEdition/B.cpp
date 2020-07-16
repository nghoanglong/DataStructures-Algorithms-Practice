#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>
#include<map>

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
#define mp map<ll, ll>
#define mp_pair map<pair<ll, ll>, ll>

using namespace std;

mp count_x, count_y;
mp_pair pair_dupli;

int solve(ll n){
    ll TH_X = 0, TH_Y = 0, TH_DUP = 0;
    for(auto x = count_x.begin();x != count_x.end();x++){
        TH_X = TH_X + (x->second * (x->second - 1)) / 2;
    }
    for(auto y = count_y.begin();y != count_y.end();y++){
        TH_Y = TH_Y + (y->second * (y->second - 1)) / 2;
    }
    for(auto dup = pair_dupli.begin();dup != pair_dupli.end();dup++){
        TH_DUP = TH_DUP + (dup->second * (dup->second - 1)) / 2;
    }
    return TH_X + TH_Y - TH_DUP;

}
int main(){
    fast_io
    ll n; cin >> n;
    for(ll i = 0;i < n;i++){
        ll x, y; cin >> x >> y;
        ++count_x[x];
        ++count_y[y];
        pair_dupli[make_pair(x, y)]++;
    }
    cout << solve(n);
}