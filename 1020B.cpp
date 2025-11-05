#include <iostream>
#include <vector>
using namespace std;

int dfs(int v, vector<int> &a){
    vector<bool> vis(a.size(), false);

    while(!vis[v]){
        vis[v] = true;
        v = a[v];
    }

    return v;
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i], a[i]--;

    for(int i=0; i<n; i++){
        cout << dfs(i, a) + 1<< " ";
    }
    cout << endl;

    return 0;
}