#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        if(is_sorted(a.begin(), a.end())) cout << "YES" << endl;
        else if(n>1 && x<2) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}