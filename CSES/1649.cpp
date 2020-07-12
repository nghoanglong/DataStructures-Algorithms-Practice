#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>

using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)

/*
    Idea: Cần có kiến thức tối ưu cài đặt cây segment
*/
vec SEG;
ll n;

void updatePoint(ll pos, ll new_val){
    SEG[pos + n] = new_val;
    for(ll i = (pos + n) >> 1;i > 0;i >>= 1){
        SEG[i] = min(SEG[i << 1], SEG[(i << 1) | 1]);
    }
}
ll getMinRange(ll left, ll right){
    //get min từ [left, right)
    left = left + n;
    right = right + n;
    ll ans = INF;
    while(left < right){
        if(left & 1) ans = min(ans, SEG[left++]);
        if(right & 1) ans = min(ans, SEG[--right]);
        left >>= 1;
        right >>= 1;
    }
    return ans;
}

int main(){
    fast_io
    //debug("1649.txt")

    ll q; cin >> n >> q;
    SEG = vec(2 * n);
    for(ll i = n;i < 2 * n;i++) 
        cin >> SEG[i];
    for(ll i = n - 1;i > 0;i--) 
        SEG[i] = min(SEG[i << 1], SEG[(i << 1) | 1]);  
    while(q--){
        ll opts, a, b; cin >> opts >> a >> b;
        if(opts == 1){
            updatePoint(a - 1, b);
        }
        else{
            cout << getMinRange(a - 1, b) << endl;
        }
    }
}