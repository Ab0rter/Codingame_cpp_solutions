#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{

    // game loop
    while (1) {
        vector<int> mnt(8);
        priority_queue<int> q;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            mnt[i] = mountain_h;
            q.push(mountain_h);
        }

        
        int t = q.top();
        q.pop();

        for(int i = 0; i < 8; i++)
        {
            if(mnt[i] == t)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
