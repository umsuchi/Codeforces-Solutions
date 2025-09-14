#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();

        if(n & 1) cout << "NO" << endl;
        else{
            string a, b;
            for(int i=0; i<n/2; i++) a += s[i];
            for(int i=n/2; i<n; i++) b += s[i];
            
            if(a == b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}