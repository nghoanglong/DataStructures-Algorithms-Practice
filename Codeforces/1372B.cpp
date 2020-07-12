#include<iostream>
#include<math.h>
#include<vector>
#include<fstream>
#include<string.h>

#define ll long long
#define fast_io ios::sync_with_stdio(0), cin.tie(0);
#define vec vector<ll>
#define debug(name) ifstream fi; fi.open(name); if(!fi){cout << "cant open this file" << endl; return 0;}
#define MAXN (ll)(1e8)
#define INF (ll)(1e9)

using namespace std;

/*
    Idea: 
    .để tìm bội chung nhỏ nhất của 2 số a và b sao cho a + b = n thì ta chỉ cần tìm ước lớn nhất của a và ước lớn nhất của b < n
    .Ta có thể tìm ước lớn nhất của n từ đó a = n rồi b = n - a
    .Để tìm ước lớn nhất của 1 số ta có định lý sau: k = n / p, với k là ước lớn nhất của số n còn p là số nguyên tố nhỏ nhất sao cho n % p == 0
    
*/

int main(){
    fast_io
    //debug("B.txt")
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a, b;
        if(n % 2 == 0){
            a = n / 2;
            b = n / 2;
        }
        else{
            ll p = 1;
            for(ll i = 3;i * i <= n;i++){
                if(n % i == 0){
                    p = i;
                    break;
                }
            }
            if(p == 1){
                a = 1;
                b = n - 1;
            }
            else{
                a = n / p;
                b = n - a;
            }
        }
        cout << a << " " << b << endl;
    }
}