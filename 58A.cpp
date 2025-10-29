#include <iostream>
using namespace std;

int main()
{
    string s, t; cin >> s ;
    t = "hello";
    int a = 0, b = 0;
    while(b < s.length()){
        if(s[b] == t[a]) a++;
        if(a == 5) break;
        b++;
    }

    cout << (a >= 5 ? "YES" : "NO") << endl ;

    return 0;
}