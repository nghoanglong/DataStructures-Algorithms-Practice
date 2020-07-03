#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

typedef long long ll;
/*
    Idea:
    Tổng các phần tử = sum
    ->Để chia ra 2 phần có sai số khác nhau nhỏ nhất thì part <= sum/2
    ->Sai số nhỏ nhất = sum - 2 * part
    Để tìm được part, ta sẽ sử dụng bit mask để tìm ra subset có tổng lớn nhất tức part lớn nhất sao cho <= sum/2
    ->ans = sum - 2 * max_subset
    
*/
int main(){
    ll n; cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    ll max_subset = 0;
    for(ll mask = 0;mask < (1 << n);mask++){
        ll sum_subset = 0;
        for(ll j = 0;j < n;j++){
            if(mask & (1 << j)){
                sum_subset = sum_subset + arr[j];
            }
        }
        if(sum_subset <= (sum / 2)){
            max_subset = max(max_subset, sum_subset);
        }
    }
    cout << sum - (2 * max_subset);
}