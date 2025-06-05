#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a , b , c , x;
    cin >> a >> b >> c;
    x = a + b;

    sort(x.begin() , x.end());
    sort(c.begin() , c.end());

    if(x == c) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}