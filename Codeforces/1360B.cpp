#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        bool tag = true;
        vector<ll> element;
        map<ll, ll> arr;
        for(ll i = 0;i < n;i++){
            //nếu có phần tử trùng thì luôn chọn đc Max(A) - Min(B) = 0
            ll value; cin >> value;
            if(arr.find(value) != arr.end()){
                tag = false;
            }
            else{
                arr.insert(pair<ll, ll>(value, 1));
                element.push_back(value);
            }
        }
        if(tag){
            ll ans = (ll)1e6;
            sort(element.begin(), element.end(), less<int>());
            for(ll i = 1;i < n;i++){
                ans = min(ans, element[i] - element[i - 1]); 
            }
            cout << ans << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}