#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int lx, ly;
    int x, y;

    cin >> lx; cin.ignore();
    cin >> ly; cin.ignore();
    cin >> x; cin.ignore();
    cin >> y; cin.ignore();

    while(1) {
        int rm;
        cin >> rm; cin.ignore();

        string move = "";

        if(y > ly) {
            move += 'N';
            y--;
        }
        else if(y < ly) { 
            move += 'S';
            y++;
        }

        if(x < lx) {
            move += 'E';
            x++;
        }
        else if(x > lx) {
            move += 'W';
            x--;
        }

        cout << move << endl;
    }
}
