#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int a1;
    cin >> a1; cin.ignore();
    int n;
    cin >> n; cin.ignore();

    vector<int> dp(n);
    unordered_map<int,int> hash;

    dp[0] = a1;
    hash.insert({dp[0], 0});

    for(int i = 1; i < n; i++) {
        
        if(hash.count(dp[i-1]) == 0) {
            hash.insert({dp[i-1], i-1});
            dp[i] = 0;
        }
        else {
            dp[i] = i-1-hash[dp[i-1]];
            hash[dp[i-1]] = i-1;
        }
    }

    cout << dp[n-1] << endl;
}
