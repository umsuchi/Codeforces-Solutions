#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        if(s == "abc" || s == "bac" || s == "acb" || s == "cba")
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}