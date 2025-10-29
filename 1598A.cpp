#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, b; cin >> a >> b;

        bool v = 0;
        for(int i = 0; i < n; i++)
            if(a[i] == '1' && b[i] == '1')
                v = 1;
            
        cout << (v ? "NO" : "YES") << endl ;
    }

    return 0;
}