#include<iostream>
#include<vector>

using namespace std;
typedef long long ll;

/* Idea: 
B1: Dùng công thức cấp số cộng tính tổng dãy 1 + 2 +...n
B2: nếu tổng / 2 bằng số lẻ -> ko thể tạo ra 2 set có tổng bằng nhau đc
B3: Sử dụng tham lam -> push hết các số vào set_1 và set_2
*/

int main(){
    vector<ll> set_1, set_2;
    ll n; cin >> n;
    ll sum = (n *(1 + n)) / 2;
    if(sum % 2 != 0){
        cout << "NO";
        return 0;
    }
    ll move = sum / 2;
    for(int i = n; i >= 1;i--){
        if(move - i >= 0){
            set_1.push_back(i);
            move = move - i;
        }
        else{
            set_2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << set_1.size() << endl;
    for(auto x: set_1){
        cout << x << " ";
    }
    cout << endl;
    cout << set_2.size() << endl;
    for(auto x: set_2){
        cout << x << " ";
    }
}