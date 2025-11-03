#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s, p; cin >> s >> p;

        int c=0;

        for(int i=1; i<=n; i++){
            if(p[i - 1] == '1' && (s[i - 1] == '0' || s[i - 2] == '1'))
                c++;
            else if(p[i - 1] == '1' && s[i] == '1')
                c++, s[i] = '2';
        }

        cout << c << endl;

    }

    return 0;
}