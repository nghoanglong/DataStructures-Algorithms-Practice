#include<iostream>
#include<vector>
#include<fstream>
#include<set>

using namespace std;

typedef long long ll;
/*
    Idea:
    .Sử dụng kỹ thuật sliding window với 2 con trỏ left right, cho con trỏ right chạy tới khi nào gặp phần tử mà tại đó arr[right] 
    đã có trong set -> ta tiến hành cập nhật lại ans và cho left + 1 đồng thời ta cũng xóa vị trí phần tử đầu tiên trong set vì left đã + 1
    
*/
int main(){
    // ifstream fi;
    // fi.open("input.txt");
    // if(!fi){
    //     cout << "cant open this file" << endl;
    //     return 0;
    // }

    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0;i < n;++i) cin >> arr[i];
    ll left = 0, right = 1, ans = 1;
    set<ll> my_set;
    my_set.insert(arr[0]);
    while(left < n && right < n){
        if(my_set.find(arr[right]) != my_set.end()){
            ans = max(ans, (ll)my_set.size());
            my_set.erase(my_set.find(arr[left]));
            ++left;
        }
        else{
            my_set.insert(arr[right]);
            ++right;
        }
    }
    if(!my_set.empty()){
        ans = max(ans, (ll)my_set.size());
    }
    my_set.clear();
    cout << ans;
}