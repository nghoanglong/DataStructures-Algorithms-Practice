#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    ll ans = (ll)1e8;
    for(ll mask = 0;mask < (1 << n);mask++){
        ll sum_subset = 0;
        for(ll j = 0;j < n;j++){
            if(mask & (1 << j)){
                sum_subset = sum_subset + arr[j];
            }
        }
        if(sum_subset <= (sum / 2)){
            ll distinct = abs(sum - 2 * sum_subset);
            ans = min(ans, distinct);
        }
    }
    cout << ans;
}