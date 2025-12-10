#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin >> v[i];
        int c;
        cin >> c;
        sort(v.begin(), v.end());

        cout << ((c >= v[0] && c <= v[n-1]) ? "YES" : "NO") << endl; 
    }

    return 0;
}