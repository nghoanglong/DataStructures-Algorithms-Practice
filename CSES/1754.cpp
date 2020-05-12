#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    vector<string> ans;
    ll t; cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(((a + b) % 3) == 0 && min(a, b) * 2 >= max(a, b)){
            //vì 2 số a và b cộng nhau phải chia hết cho 3 vì điều kiện tăng 1 giảm 2 của đề bài, nếu số min * 2 < max thì ko thể đáp ứng đc vì
            //sẽ có 1 số lùi về âm đầu tiên
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}