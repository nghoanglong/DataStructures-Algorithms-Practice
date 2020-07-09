#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);

vector<ll> BIT;
ll n;

void update(ll pos, ll value_u){
    while(pos <= n){
        BIT[pos] = BIT[pos] + value_u;
        pos = pos + (pos & -pos);
    }
}
ll getSum(ll k){
    ll ans = 0;
    while(k >= 1){
        ans = ans + BIT[k];
        k = k - (k & -k);
    }
    return ans;
}

ll getSum(ll a, ll b){
    return getSum(b) - getSum(a - 1);
}

int main(){
    fast_io

    // ifstream fi;
    // fi.open("input.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll q; cin >> n >> q;
    vector<ll> arr(n);
    BIT = vector<ll>(n + 1);
    for(ll i = 0;i < n;++i){
        cin >> arr[i];
        update(i + 1, arr[i]);
    }
    while(q--){
        ll opts, a, b; cin >> opts >> a >> b;
        if(opts == 1){
            update(a, b - arr[a - 1]);
            arr[a - 1] = b;
        }
        else{
            cout << getSum(a, b) << endl;
        }
    }
}