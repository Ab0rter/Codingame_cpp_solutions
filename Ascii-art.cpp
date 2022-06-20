#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <queue>

using namespace std;

string lett = "abcdefghijklmnopqrstuvwxyz?";

int main()
{
    int w, h;
    cin >> w; cin.ignore();
    cin >> h; cin.ignore();

    string s;
    getline(cin, s);

    vector<string> in_alph(h);
    for(int i = 0; i < h; i++)
        getline(cin, in_alph[i]);

    
    
    map<char, vector<string>> alph;

    for(int j = 0, k = 0; j < w*27; j+=w, k++)
    {
        vector<string> tmp(h);
        for(int i = 0; i < h; i++)
        {
            for(int t = j; t < j+w; t++) tmp[i] += in_alph[i][t];
        }
        alph.insert({lett[k], tmp});
    }

    for(int i = 0; i < h; i++)
    {
        for(char c : s)
        {
            c = tolower(c);
            if(c >= 'a' && c <= 'z')
                cout << alph[c][i];
            else
                cout << alph['?'][i];
        }
        cout << endl;
    }
}
