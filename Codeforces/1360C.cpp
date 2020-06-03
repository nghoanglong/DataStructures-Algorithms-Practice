#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr;
        ll num_even = 0, num_odd = 0, distance = 0;
        for(ll i = 0;i < n;++i){
            ll value; cin >> value;
            arr.push_back(value);
            if(value % 2 == 0){
                ++num_even;
            }
            else{
                ++num_odd;
            }
        }
        if(num_even % 2 == 0 && num_odd % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            unordered_multiset<ll> distance(arr.begin(), arr.end());
            for(ll i = 0;i < n;i++){
                if(distance.find(arr[i]) != distance.end() && distance.find(arr[i] + 1) != distance.end()){
                    --num_odd; --num_even;
                    break;
                }
                else if(distance.find(arr[i]) != distance.end() && distance.find(arr[i] - 1) != distance.end()){
                    --num_even; --num_odd;
                    break;
                }
            }
            
            if(num_even % 2 == 0 && num_odd % 2 == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}