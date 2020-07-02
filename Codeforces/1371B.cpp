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
    // fi.open("B.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }
    ll t; cin >> t;
    while(t--){
        ll num_block, limit_block; cin >> num_block >> limit_block;
        ll ans = 0;
        if(limit_block >= num_block){
            ans = ans + 1;
            ans = ans + ((num_block - 1) * (1 + (num_block - 1))) / 2;
        }
        else{
            ans = (limit_block * (1 + limit_block)) / 2;
        }
        cout << ans << endl;
    }
    
}