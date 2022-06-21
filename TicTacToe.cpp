#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<string>& table, int i, int j);

int main()
{
    vector<string> tb(3);
    bool win = false;

    for (int i = 0; i < 3; i++) {
        getline(cin, tb[i]);
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(tb[i][j] == '.') {
                win = isValid(tb, i, j);
            }

            if(win) i = 3, j = 3;
        }
    }
    
    if(win) {
        for(string s : tb)
            cout << s << endl;
    }
    else
        cout << "false" << endl;
}

bool isValid(vector<string>& table, int i, int j)
{
    if(j+2<3) { //bordo sinistro
        if(i+2<3) { //top
            if(table[i+1][j] == table[i+2][j] && table[i+1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i+1][j+1] == table[i+2][j+2] && table[i+1][j+1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j+1] == table[i][j+2] && table[i][j+1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else if(i+1<3) {//mid
            if(table[i-1][j] == table[i+1][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j+1] == table[i][j+2] && table[i][j+1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else { //bot
            if(table[i-1][j] == table[i-2][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j+1] == table[i-2][j+2] && table[i-1][j+1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j+1] == table[i][j+2] && table[i][j+1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
    }
    else if(j+1<3) { //centro
        if(i+2<3) { //top
            if(table[i][j-1] == table[i][j+1] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i+1][j] == table[i+2][j] && table[i+1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else if(i+1<3) {//mid
            if(table[i][j-1] == table[i][j+1] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j] == table[i+1][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j-1] == table[i+1][j+1] && table[i-1][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j+1] == table[i+1][j-1] && table[i+1][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else { //bot
            if(table[i][j-1] == table[i][j+1] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j] == table[i-2][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
    }
    else { //bordo destro
        if(i+2<3) { //top
            if(table[i+1][j] == table[i+2][j] && table[i+1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i+1][j-1] == table[i+2][j-2] && table[i+1][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j-1] == table[i][j-2] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else if(i+1<3) {//mid
            if(table[i-1][j] == table[i+1][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j-1] == table[i][j-2] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
        else { //bot
            if(table[i-1][j] == table[i-2][j] && table[i-1][j] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i-1][j-1] == table[i-2][j-2] && table[i-1][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }

            if(table[i][j-1] == table[i][j-2] && table[i][j-1] == 'O') {
                table[i][j] = 'O';
                return true;
            }
        }
    }

    return false;
}
