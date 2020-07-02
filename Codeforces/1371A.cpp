#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

int main(){

    // ifstream fi;
    // fi.open("A.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }
    ll t; cin >> t;
    while(t--){
        ll x; cin >> x;
        ll ans = (x - 1) / 2;
        cout << ans + 1 << endl;
    }
}