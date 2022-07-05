#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    map<char, float> mp;
    for(char c = '1'; c <= '9'; c++) {
        mp.insert({c, 0});
    }

    for (int i = 0; i < n; i++) {
        string transaction;
        getline(cin, transaction);

        for(char c : transaction) {
            if(c >= '1' && c <= '9') {
                mp[c]++;
                break;
            }
        }
    }

    for(char c = '1'; c <= '9'; c++) {
        mp[c] = mp[c]*100/n;
    }

    if(mp['1'] < 20.1 || mp['1'] > 40.1) {
        cout << "true" << endl;
    }
    else if(mp['2'] < 7.6 || mp['2'] > 27.6) {
        cout << "true" << endl;
    }
    else if(mp['3'] < 2.5 || mp['3'] > 22.5) {
        cout << "true" << endl;
    }
    else if(mp['4'] < 9.7-10 || mp['4'] > 19.7) {
        cout << "true" << endl;
    }
    else if(mp['5'] < 7.9-10 || mp['5'] > 17.9) {
        cout << "true" << endl;
    }
    else if(mp['6'] < 6.7-10 || mp['6'] > 16.7) {
        cout << "true" << endl;
    }
    else if(mp['7'] < 5.8-10 || mp['7'] > 15.8) {
        cout << "true" << endl;
    }
    else if(mp['8'] < 5.1-10 || mp['8'] > 15.1) {
        cout << "true" << endl;
    }
    else if(mp['9'] < 4.6-10 || mp['9'] > 14.6) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
