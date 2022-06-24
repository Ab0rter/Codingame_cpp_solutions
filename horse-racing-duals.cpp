#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        arr.push_back(pi);
    }

    sort(arr.begin(), arr.end());

    int ans = arr[1]-arr[0];
    for(int i = 1; i+1<n; i++) {
        ans = min(ans, arr[i+1]-arr[i]);
    }

    cout << ans << endl;
}
