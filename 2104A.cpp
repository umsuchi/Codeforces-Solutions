#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    while (n--) {
        long a, b, c;
        cin >> a >> b >> c;

        long s = a + b + c;
        long u = (s % 3) ? -1 : (s / 3);
        cout << ((u >= a && u >= b) ? " YES" : "NO") << endl;
    }

    return 0;
}