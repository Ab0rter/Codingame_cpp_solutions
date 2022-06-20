#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int sudoku[9][9];
    bool cells_flag = true, row_flag = true, col_flag = true;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j]; cin.ignore();
        }
    }

    //iterate through cells
    for(int row = 0; row < 3; row++) {
        for(int cell = 0; cell < 3; cell++) {
            vector<char> vis(10, false);
            for(int i = row*3; i < (row*3)+3; i++) {
                for(int j = cell*3; j < (cell*3)+3; j++) {
                    if(vis[sudoku[i][j]]) cells_flag = false;
                    else vis[sudoku[i][j]] = true;
                }
            }
        }
    }


    //iterate through rows
    for(int i = 0; i < 9; i++) {
        vector<char> vis(10, false);
        for(int j = 0; j < 9; j++) {
            if(vis[sudoku[i][j]]) row_flag = false;
            else vis[sudoku[i][j]] = true;
        }

        if(!row_flag) break;
    }

    //iterate through coloumns
    for(int j = 0; j < 9; j++) {
        vector<char> vis(10, false);
        for(int i = 0; i < 9; i++) {
            if(vis[sudoku[i][j]]) row_flag = false;
            else vis[sudoku[i][j]] = true;
        }

        if(!row_flag) break;
    }


    if(cells_flag && row_flag && col_flag) cout << "true" << endl;
    else cout << "false" << endl;
}
