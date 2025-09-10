#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int c = 0;
        while(c < n && s[c] != s[n - 1]) c++, n--;

        cout << n - c << endl;
    }

    return 0;
}