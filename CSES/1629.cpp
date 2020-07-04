#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<fstream>

using namespace std;

typedef long long ll;

/*

    Idea: Bài này cần kiến thức về Tham lam
    Sort thứ tự các công việc theo thời gian kết thúc -> từ đó ta bắt đầu chọn -> đây chính là kết quả tối ưu nhất
    .Tìm hiểu thêm: Greedy Algorithm - Activity Selection

*/
struct Movies{
    ll time_start;
    ll time_end;
};
bool func(Movies &a, Movies &b){
    if(a.time_end < b.time_end){
        return true;
    }
    return false;
}
int main(){

    // ifstream fi;
    // fi.open("1074.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n; cin >> n;
    vector<Movies> arr(n);
    for(ll i = 0;i < n;i++){
        cin >> arr[i].time_start >> arr[i].time_end;
    }
    sort(arr.begin(), arr.end(), func);
    ll ans = 1, j = 0;
    for(ll i = 1;i < n;i++){
        if(arr[j].time_end <= arr[i].time_start){
            ++ans;
            j = i;
        }
    }
    cout << ans;
}