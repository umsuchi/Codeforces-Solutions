#include <iostream>
using namespace std;
 
int main()
{
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        long x, y; cin >> x >> y;
 
        int sum = 0;
 
        int a[n]; for(int i=0; i<n; i++) cin >> a[i];
 
        int b[m]; for(int i=0; i<m; i++) cin >> b[i];
 
        sum = m+n;
 
        cout << sum << endl;
    }
 
    return 0;
}