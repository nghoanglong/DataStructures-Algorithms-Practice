#include<iostream>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a,b,ans;
        cin >> a >> b;
        ans = (a + b) * (a + b); //hình vuông tối đa cần có
        if(a + a <= b + b) {
            ans = min(ans, max(a + a, b) * max(a + a, b)); 
        }
        else {
            ans = min(ans, max(b + b, a) * max(b + b, a));
        }
        cout << ans << endl;
    }
    return 0;
}