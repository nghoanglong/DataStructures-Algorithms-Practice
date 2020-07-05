#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

/*

    Idea: Bài này cần kiến thức về Range Queries, có thể tìm tài liệu trên mạng, hoặc đọc trong sách Competitive Programmer's Handbook
    .Sử dụng prefix sum

*/

int main(){

    // ifstream fi;
    // fi.open("1074.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> pref(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        if(i == 0) pref[i] = arr[i];
        else{
            pref[i] = pref[i - 1] + arr[i];
        }
    }
    while(q--){
        ll a, b; cin >> a >> b;
        cout << pref[b - 1] - ((a - 2 < 0) ? 0 : pref[a - 2]) << endl;
    }
}