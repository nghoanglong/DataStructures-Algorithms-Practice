#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> arr(n);
    for(ll i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll left = 0, right = n - 1, ans = 0;
    while(left <= right){
        if(left == right){
            ++ans;
            break;
        }
        else{
            ll temp_sum = arr[left] + arr[right];
            if(temp_sum <= x){
                ++left;
                --right;
                ++ans;
            }
            else if(temp_sum > x){
                --right;
                ++ans;
            }
        }
    }
    cout << ans;
}