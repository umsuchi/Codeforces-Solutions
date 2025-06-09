#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    int x , y;
    x = min(a , b);
    y = max(a , b);
    cout << x << " " << (y - x) / 2 << endl;

    return 0;
}