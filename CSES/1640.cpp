/*
    Idea: Sử dụng kiến thức two pointers
    Đpt: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

struct num
{
    ll data;
    ll pos;
};

bool funcsort(num a, num b)
{
    if (a.data < b.data)
    {
        return true;
    }
    return false;
}

int main()
{
    ll n, target;
    cin >> n >> target;
    vector<num> arr(n);
    for (ll i = 0; i < n; ++i)
    {
        ll value;
        cin >> value;
        arr[i].data = value;
        arr[i].pos = i + 1;
    }
    sort(arr.begin(), arr.end(), funcsort);
    ll left = 0;
    ll right = n - 1;
    while (left < right)
    {
        ll sum = arr[left].data + arr[right].data;
        if (sum == target)
        {
            cout << arr[right].pos << " " << arr[left].pos;
            return 0;
        }
        else if (sum > target)
        {
            right = right - 1;
        }
        else
        {
            left = left + 1;
        }
    }
    cout << "IMPOSSIBLE";
}