#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string to_binary(int N);

int main()
{
    string message;
    getline(cin, message);

    vector<int> nums;

    for(char c : message) {
        nums.push_back((int)c);
    }

    string binary = "";

    for(int i : nums) {
        binary += to_binary(i);
    }

    int i = 0, j;
    if(binary[i] == '0') cout << "00";
    else cout << "0";
    while(i < binary.size()) {
        cout << " ";
        if(i != 0) {
            if(binary[i] == '0') cout << "00 ";
            else cout << "0 ";
        }

        j = i+1;
        while(binary[j] == binary[i]) {
            cout << "0";
            j++;
        }

        cout << "0";
        i = j;
    }
}

string to_binary(int N)
{
    string ret = "";
    string rev = "";

    while(N) {
        if(N & 1) ret += '1';
        else ret += '0';
        N >>= 1;
    }

    if(ret.size() < 7) {
        for(int i = ret.size(); i < 7; i++) ret += '0'; 
    }

    for(int i = ret.size()-1; i >= 0; i--) {
        rev += ret[i];
    }


    return rev;
}
