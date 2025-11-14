#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        long n; cin >> n;
        vector<long> a(n);
        bool v(false);
        bool u(false);

        for(long i=0; i<n; i++) {
            cin >> a[i];
            v |= (a[i] & 1);
            u |= (a[i] % 2 == 0);
        }

        if(v && u) sort(a.begin(), a.end());

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}