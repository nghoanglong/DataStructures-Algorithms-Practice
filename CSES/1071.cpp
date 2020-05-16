#include<iostream>
using namespace std;
typedef long long ll;

/* Idea: tại vị trí cột lẻ, số đầu tiên của cột đó là số chính phương, tương tự tại vị trí hàng chẵn
B1: Chọn số lớn hơn trong 2 số x và y
B2: Nếu số lớn hơn là x(cột) ta sẽ move dọc theo hàng
B3: x là số chẵn thì phải (x - 1) * (x - 1) để ta lấy đc số chính phương ở vị trí cột lẻ sau đó tiến hành move theo hàng bằng cách + với số hàng
    x là số lẻ thì nó đã cho ta sẵn số chính phương tại vị trí đó nên để move theo hàng ta sẽ lấy y(số hàng) - 1(hàng chứa số chính phương) 
    cộng vào là ra kết quả

tương tự cho trường hợp là y(hàng)
*/
 
int main(){
    ll t; cin >> t;
    while(t--){
        ll x, y, ans;
        cin >> y >> x;
        if(x > y){
            if(x % 2 != 0){
                ans = x * x - (y - 1);
            }
            else{
                ans = (x - 1) * (x - 1) + y;
            }
        }
        else{
            if(y % 2 == 0){
                ans = y * y - (x - 1);
            }
            else{
                ans = (y - 1) * (y - 1) + x;
            }
        }
        cout << ans << endl;
    }
}