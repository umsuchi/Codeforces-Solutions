#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int x, y, n; cin >> x >> y >> n;

        int c = n - (n - y) % x;
        cout << c << endl;
    }

    return 0;
}