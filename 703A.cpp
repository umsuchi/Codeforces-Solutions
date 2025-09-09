#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    int m = 0, n = 0;

    while(t--){
        int a, b; cin >> a >> b;
        if(a > b) m++;
        else if(b > a) n++;
        else continue;
    }

    if(m > n) cout << "Mishka" << endl;
    else if(n > m) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    return 0;
}