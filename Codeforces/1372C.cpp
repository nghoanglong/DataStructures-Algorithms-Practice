#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)

using namespace std;

int main(){
    fast_io
    //debug("1372C.txt")

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        bool tag = false;
        vec arr(n + 1);
        for(ll i = 1;i <= n;i++){
            cin >> arr[i];
            if(arr[i] != i) tag = true;
        }
        if(tag){
            ll left = 1, right = n;
            tag = false;
            while(left <= n && arr[left] == left)
                ++left;
            while(right >= 1 && arr[right] == right)
                --right;
            for(ll i = left;i <= right;i++){
                if(arr[i] == i){
                    tag = true;
                    break;
                }
            }
            if(tag){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }
}