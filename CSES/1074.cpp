#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

/*
    Idea: 
    Update phần tử về phần tử ở giữa sẽ làm độ chênh lệch nhỏ nhất
*/

int main(){

    // ifstream fi;
    // fi.open("1074.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n; cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    sort(arr.begin(), arr.end());
    ll mid_element = arr[n / 2];
    ll ans = 0;
    for(ll i = 0;i < n;i++) ans = ans + abs(mid_element - arr[i]);
    cout << ans;
}