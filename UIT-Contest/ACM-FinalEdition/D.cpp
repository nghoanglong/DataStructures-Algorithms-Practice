#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>

using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
#define mp map<ll, ll>

int main(){
    ll width; cin >> width;
    ll n; cin >> n;
    ll dientich = 0;
    for(ll i = 0;i < n;i++){
        ll width_p, length_p; cin >> width_p >> length_p;
        dientich = dientich + (width_p * length_p);
    }
    cout << dientich / width;
}