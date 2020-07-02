#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

int main(){

    // ifstream fi;
    // fi.open("C.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    //nếu tổng của 2 loại người < a + b -> sẽ ko bao giờ chia đủ bánh mà ko làm ai tức giận đc
    //vì người loại 2 luôn decrease số bánh ít hơn, còn người 1 luôn decrease số bánh nhiều hơn
    //nên nếu ta đặt trường hợp type_1 đi trước type_2 thì chắc chắn khiến người loại 2 angry vì họ luôn select min(a, b)
    //-> ta phải order tất cả người loại 2 đi trước để về cuối người loại 1 ko angry -> type_2 phải <= min(a, b)
    ll t; cin >> t;
    while(t--){
        ll a, b, type_1, type_2; cin >> a >> b >> type_1 >> type_2;
        if((a + b >= type_1 + type_2) && (type_2 <= min(a, b))){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}