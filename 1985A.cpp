#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a , b;
        cin >> a >> b;
        char m = a[0] , n = b[0];
        a[0] = n , b[0] = m;
        cout << a << ' ' << b << endl;
    }

    return 0;
}