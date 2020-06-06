#include <iostream>
 
using namespace std;
typedef long long ll;
 
int main()
{
    ll t; cin >> t;
    while(t--){
        ll rows, column; cin >> rows >> column;
        ll res = (rows / 2) * column + ((rows % 2) * ((column / 2) + (column % 2)));
        cout << res << endl;
    }
}