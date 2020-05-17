#include<iostream>
#include<math.h>
using namespace std;

typedef long long ll;

/*bài này có thể sử dụng vòng lặp bình thường for(i = 0;i < n;i++) -> ans = ans * 2 nhưng mà mình dùng bit manipulation cho đỡ quên kiến thức :v */

int main(){
    ll n; cin >> n;
    ll ans = 1, status = 2; //trạng thái là tương ứng với mỗi bit ta có thể chọn 2 trạng thái là 0 hoặc 1
    while(n){
        if(n & 1){
            //nếu là bit lẻ thì thực hiện thay đổi kết quả
            ans = (ans * status) % (ll)(1e9 + 7);
        }
        n = n >> 1; // tương tự với phép n = n/2 nhưng ở đây mình dùng dịch bit
        status = (status * status) % (ll)(1e9 + 7); //nếu là số chẵn(bit cuối luôn != 1) thì thực hiện gấp đôi trạng thái lên 2 lần do 2 -> 3 -> 4 
    }
    cout << ans;
}