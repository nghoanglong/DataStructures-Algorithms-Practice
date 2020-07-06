#include<iostream>
#include<vector>
#include<fstream>

using namespace std;    

typedef long long ll;

/*
    Idea: Kiến thức quy hoạch động cơ bản
*/
int main(){
    ll n, S; cin >> n >> S;
    vector<ll> arr(n);
    vector<ll> DP(S + 1, (ll)1e8);
    for(ll i = 0;i < n;i++) cin >> arr[i];
    DP[0] = 0;
    bool flag = false;
    for(ll M = 1;M <= S;++M){
        for(ll i = 0;i < n;i++){
            if(M >= arr[i] && DP[M] > DP[M - arr[i]] + 1){
                if(M == S) flag = true;
                DP[M] = DP[M - arr[i]] + 1;
            }
        }
    }
    if(flag) 
        cout << DP[S];
    else
        cout << -1;
}