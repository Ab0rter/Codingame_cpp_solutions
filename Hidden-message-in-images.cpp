#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
    int w;
    int h;
    cin >> w >> h; cin.ignore();

    int k = 7;
    int c = 0;

    for (int i = 0; i < h; i++) {
        if(k < 0) {
            cout << (char)c;
            k = 7;
            c = 0;
        }
        for (int j = 0; j < w; j++) {
            if(k < 0) {
                cout << (char)c;
                k = 7;
                c = 0;
            }
            
            int pixel;
            cin >> pixel; cin.ignore();

            c += pixel%2 * pow(2, k--);        
        }
    }

    cout << (char)c << endl;
}
