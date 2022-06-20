#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, mn = 0;
    vector<int> arr;

    cin >> n;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end(), [](int a, int b){
        return (abs(a)) < (abs(b));
    });

    if(n > 0) {
        mn = arr[0];
        if(abs(mn) == abs(arr[1]) && mn < 0 && arr[1] >= 0)
        {
            mn = arr[1];
        }
    }

    cout << mn;
}
