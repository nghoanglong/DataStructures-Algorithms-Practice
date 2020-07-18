#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<fstream>
#include<string.h>
#include<algorithm>

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
#define vec vector<ll>
#define mp map<ll, ll>

using namespace std;

int main(){
    fast_io
    //debug("1385A.txt")

    ll t; cin >> t;
    while(t--){
        vec arr(3);
        for(ll i = 0;i < 3;++i) cin >> arr[i];
        sort(arr.begin(), arr.end());
        if(arr[2] != arr[1]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << arr[0] << " " << arr[0] << " " << arr[2] << endl;
        }
    }
}