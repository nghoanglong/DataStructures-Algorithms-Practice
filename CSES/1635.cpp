#include<iostream>
#include<vector>
#include<fstream>

#define ll long long
#define mod ((ll)1e9 + 7)

using namespace std;
/*
    Idea: Kiến thức quy hoạch động cơ bản, mình có viết ở folder Dynamic programming bài Coins
*/
int main(){
    // ifstream fi;
    // fi.open("input.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n, S; cin >> n >> S;
    vector<ll> arr(n);
    vector<ll> DP(S + 1, 0);
    for(ll i = 0;i < n;i++) cin >> arr[i];
    DP[0] = 1;
    for(ll M = 1;M <= S;M++){
        for(ll i = 0;i < n;i++){
            if(M >= arr[i])
                DP[M] = (DP[M] + DP[M - arr[i]]) % mod;
        }
    }
    cout << DP[S] << endl;
}