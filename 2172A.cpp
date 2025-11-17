#include <iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;

    int x, y, z;
    x = min(a, b);
    x = min(c, x);
    y = max(a, b);
    y = max(y, c);

    if(y - x >= 10) cout << "check again" << endl;
    else cout << "final " << (a + b + c) - (x + y) << endl;

    return 0;
}