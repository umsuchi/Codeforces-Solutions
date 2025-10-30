#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int sum = 1;
    vector<int> v(a);
    for(int i=1; i<a; i++) cin >> v[i];
        
    vector<bool> vis(a+1, false);

    queue<int> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()){
        int i = q.front();
        q.pop();

        int j = i + v[i];
        if(j <= a && !vis[j]){
            vis[j] = true;
            q.push(j);
        }
    }

    cout << (vis[b] ? "YES" : "NO") << endl;

    return 0;
}