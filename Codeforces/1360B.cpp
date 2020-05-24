#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n; cin >> n;
        bool tag = true;
        vector<int> element;
        map<int, int> arr;
        for(int i = 0;i < n;i++){
            //nếu có phần tử trùng thì luôn chọn đc max(A) - min(B) = 0
            int value; cin >> value;
            if(arr.find(value) != arr.end()){
                tag = false;
            }
            else{
                arr.insert(pair<int, int>(value, 1));
                element.push_back(value);
            }
        }
        if(tag){
            //nếu ko có phần tử trùng thì sort lại mảng rồi tham lam
            int ans = (int)1e6;
            sort(element.begin(), element.end(), less<int>());
            for(int i = 1;i < n;i++){
                ans = min(ans, element[i] - element[i - 1]); 
            }
            cout << ans << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
    return 0;
}