#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        long c = INT_MAX;
        vector<long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            c = min(c, a[i]);
        }

        long sum = 0;

        for(int i=0; i<n; i++) sum += (a[i] - c);

        cout << sum << endl;
    }

    return 0;
}