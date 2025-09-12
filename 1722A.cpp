#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    string str = "Timur";
    sort(str.begin(), str.end());
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        sort(s.begin(), s.end());
        cout << ((s == str) ? "YES" : "NO") << endl;
    }

    return 0;
}