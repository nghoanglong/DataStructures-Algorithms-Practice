#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

typedef long long ll;
/*
    Idea: sắp xếp lại dãy các phần tử, chặt nhị phân với mỗi query, tìm x trong mảng <= target
    Vì sử dụng vector hay mảng thông thường ko hỗ trợ lower_bound tìm kiếm x <= target nên mình sử dụng multiset
    
*/
int main() {
    ll n, m; cin >> n >> m;
    multiset<int, greater<int>> my_set;
    for(ll i = 0;i < n;i++){
        ll data; cin >> data;
        my_set.insert(data);
    }
    while(m--){
        ll query; cin >> query;
        auto temp = my_set.lower_bound(query);
        if(temp != my_set.end()){
            cout << *temp << endl;
            my_set.erase(temp);
        }
        else{
            cout << -1 << endl;
        }
    }
}