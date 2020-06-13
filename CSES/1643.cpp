#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    ll ans = (ll)-1e10;
    for (ll i = 0; i < n; ++i)
    {
        sum = max(arr[i], sum + arr[i]);
        ans = max(ans, sum);
    }
    cout << ans;
}