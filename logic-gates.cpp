#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n; cin.ignore();
    cin >> m; cin.ignore();

    unordered_map<string, string> hash;
    int in_size;

    for(int i = 0; i < n; i++) {
        string key, val;

        cin >> key;
        cin >> val;
        
        if(i == 0) in_size = val.size();

        hash.insert({key, val});
    }

    for(int i = 0; i < m; i++) {
        string key, gate, a, b;

        cin >> key >> gate >> a >> b;

        cout << key << " ";

        if(gate == "AND") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] == hash[b][i] && hash[a][i] == '-') cout << "-";
                else cout << "_";
            }
        }
        else if(gate == "OR") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] == '-' || hash[b][i] == '-') cout << "-";
                else cout << "_";
            }
        }
        else if(gate == "XOR") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] != hash[b][i]) cout << "-";
                else cout << "_";
            }
        }
        else if(gate == "NAND") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] == hash[b][i] && hash[a][i] == '-') cout << "_";
                else cout << "-"; 
            }
        }
        else if(gate == "NOR") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] == hash[b][i] && hash[a][i] == '_') cout << "-";
                else cout << "_";
            }
        }
        else if(gate == "NXOR") {
            for(int i = 0; i < hash[a].size(); i++) {
                if(hash[a][i] == hash[b][i]) cout << "-";
                else cout << "_";
            }
        }

        cout << endl;
    }
}
