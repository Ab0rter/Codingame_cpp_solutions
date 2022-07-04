#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();

    cerr << n << endl << q << endl << endl;

    unordered_map<string, string> hash;

    for (int i = 0; i < n; i++) {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt; cin.ignore();

        for(int i = 0; i < ext.size(); i++) {
            ext[i] = tolower(ext[i]);
        }

        hash.insert({ext, mt});
    }
    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); // One file name per line.

        string ext = "";
        bool dot = false;
        for(char c : fname) {
            if(dot) {
                if(c == '.') ext = "";
                else ext += tolower(c);
            }
            else if(c == '.') dot = true;
        }

        if(ext == "" || hash.count(ext) == 0) {
            cout << "UNKNOWN" << endl;
        }
        else {
            cout << hash[ext] << endl;
        }
    }
}
