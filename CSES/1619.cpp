#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

/*
    Idea: 
    .Thời gian kết thúc ta sẽ gán = false, mỗi khi loop chạm tới một thời điểm y -> người đó phải rời đi -> số lượng người hiện tại sẽ -1
    ngược lại nếu gặp x, ta sẽ cộng 1 người
*/

int main(){

    // ifstream fi;
    // fi.open("1619.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n; cin >> n;
    vector<pair<ll, bool>> arr;
    for(ll i = 0;i < n;i++){
        ll start, end; cin >> start >> end;
        arr.push_back(make_pair(start, true));
        arr.push_back(make_pair(end, false));
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll cur_customer = 0;
    for(ll i = 0;i < arr.size();i++){
        cur_customer += (arr[i].second == true) ? 1 : -1;
        ans = max(ans, cur_customer);
    }
    cout << ans;
}