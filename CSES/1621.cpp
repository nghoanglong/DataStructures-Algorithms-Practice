#include<iostream>
#include<map>
#include<vector>

using namespace std;
typedef long long ll;

int main(){
    ll n, ans = 0;
    map<ll, ll> my_map;
    cin >> n;
    for(int i = 0;i < n;i++){
        ll value; cin >> value;
        if(my_map.find(value) == my_map.end()){
            my_map.insert(pair<ll, ll>(value, 1));
            ++ans;
        }
    }    
    cout << ans;
}