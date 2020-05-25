#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;
const ll mod = (ll)(1e9 + 7);

void solve(vector<string> s, ll n){
    if(s[1][0] == '*'){
        cout << 0;
    }
    else{
        //Các line được comment lại là để in ra bảng cơ sở, uncmt để check bảng cơ sở nếu muốn
        //với các vị trí dấu * thì tại đó đường đi tới là 0
        //còn lại thì tại vị trí bất kì [y][x] sẽ = tổng số đường đi tới nó(đi xuống và đi sang phải) = [y - 1][x] + [y][x - 1]
        vector<vector<ll>> DP(n + 1, vector<ll>(n + 1, 0));
        DP[1][1] = 1;
        for(ll y = 1;y <= n;y++){
            for(ll x = 1;x <= n;x++){
                if(s[y][x - 1] == '*' || (x == 1 && y == 1)){
                    //cout << DP[y][x] << " ";
                    continue;
                }
                else{
                    DP[y][x] = (DP[y][x - 1] + DP[y - 1][x]) % mod;
                }
                //cout << DP[y][x] << " ";
            }
            //cout << endl;
        }
        cout << DP[n][n];
    }
}
int main(){
    ll n; cin >> n;
    vector<string> s(n + 1);
    for(int i = 1;i <= n;i++) cin >> s[i];
    solve(s, n);
}