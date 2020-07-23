#include<iostream>
#include<math.h>
#include<vector>
#include<map>
#include<unordered_map>
#include<fstream>
#include<string.h>
#include<algorithm>
 
#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)
#define vec vector<ll>
#define mp map<ll, ll>
#define un_mp unordered_map<ll, ll>
 
using namespace std;
 
string res = "abacaba";

bool check(string s) {
    int n = s.length(), cnt = 0;
    for (int i = 0; i <= n - 7; i++) {
        if (s.substr(i, 7) == res) cnt++;
    }    
    return cnt == 1;
}

int main(){
    fast_io
    //debug(".txt")
 
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string rep; cin >> rep;
        ll left = 0;
        ll equal = 0;
        while(left + 7 <= n){
            if(rep[left] == 'a'){
                string piece = rep.substr(left, 7);
                if(piece == res){
                    ++equal;
                }
            }
            ++left;
        }
        if(equal > 1){
            cout << "NO" << endl;
        }
        else if(equal == 1){
            cout << "YES" << endl;
            for(ll i = 0;i < n;i++){
                if(rep[i] == '?'){
                    cout << 'd';
                }
                else
                    cout << rep[i];
            }
            cout << endl;
        }
        else{
            ll left = 0;
            bool tag = false;
            while(left <= (n - 7)){
                ll count = 0;
                ll end = left + 7;
                ll j = 0;
                for(ll i = left;i < end;i++){
                    if(rep[i] == '?' || rep[i] == res[j]){
                        ++count;
                    }
                    else break;
                    ++j;
                }
                if(count == 7){
                    string copy_rep = rep;
                    ll k = 0;
                    for(ll i = left;i < end;i++){
                        copy_rep[i] = res[k++];
                    }
                    for(ll j = 0;j < n;j++){
                        if(copy_rep[j] == '?'){
                            copy_rep[j] = 'd';
                        }
                    }
                    if(check(copy_rep)){
                        tag = true;
                        cout << "YES" << endl;
                        cout << copy_rep << endl;
                        break;
                    }
                }
                ++left;
            }
            if(!tag){
                cout << "NO" << endl;
            }
        }
    }
}