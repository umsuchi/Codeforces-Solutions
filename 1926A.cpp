#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int a=0, b=0;
        for(int i=0; i<5; i++){
            if(s[i] == 'A') a++;
            else b++;
        }

        cout << (a > b ? "A" : "B") << endl;
    }

    return 0;
}