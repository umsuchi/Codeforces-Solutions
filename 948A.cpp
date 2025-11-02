#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    vector<string> st(a);
    for (int i=0; i<a; i++) 
        cin >> st[i];
    
    queue<pair<int,int>> q;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            if (st[i][j] == 'W'){
                q.push({i, j});
            }
        }
    }

    vector<int> x = {-1, 1, 0, 0};
    vector<int> y = {0, 0, -1, 1};
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        for (int i=0; i<4; i++){
            int nx = p.first + x[i];
            int ny = p.second + y[i];
            if (nx >= 0 && nx < a && ny >= 0 && ny < b && st[nx][ny] == 'S'){
                cout << "No" << endl;
                return 0;
            }
            else if (nx >= 0 && nx < a && ny >= 0 && ny < b && st[nx][ny] == '.')
                st[nx][ny] = 'D';
        }
    }

    cout << "Yes" << endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout << st[i][j];
        }
        cout << endl;
    }

    return 0;
}