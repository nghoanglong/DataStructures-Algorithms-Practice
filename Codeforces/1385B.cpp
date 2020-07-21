#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<unordered_map>
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
#define un_mp unordered_map<ll, ll>

using namespace std;

int main(){
    fast_io
    //debug("B.txt")

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        un_mp my_map;
        for(ll i = 0;i < 2 * n;i++){
            ll data; cin >> data;
            if(my_map.find(data) == my_map.end()){
                cout << data << " ";
                my_map.insert(make_pair(data, 1));
            }
            else{
                ++my_map[data];
            }
        }
        cout << endl;
    }
}