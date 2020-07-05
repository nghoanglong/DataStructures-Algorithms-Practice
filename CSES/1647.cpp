#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>

using namespace std;

typedef long long ll;
/*
    Idea: kiến thức về Range Minimum Query, mình đã viết ở repo lý thuyết
*/
int main(){
    // ifstream fi;
    // fi.open("input.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    vector<vector<ll>> M(n, vector<ll>(32, 0));
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        M[i][0] = arr[i];
    }
    for(ll k = 1;(1 << k) <= n;k++){
        for(ll i = 0;i + (1 << k) - 1 < n;i++){
            M[i][k] = min(M[i][k - 1], M[i + (1 << (k - 1))][k - 1]);
        }
    }
    while(q--){
        ll a, b; cin >> a >> b;
        a = a - 1, b = b - 1;
        ll k = log2(b - a + 1);
        cout << min(M[a][k], M[b - (1 << k) + 1][k]) << endl;
    }
}