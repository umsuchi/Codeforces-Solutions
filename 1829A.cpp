#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        string b = "codeforces";

        int l = 0;
        for(int i = 0 ; i < 10 ; i++) if(a[i] != b[i]) l++;
        cout << l << endl;
    }

    return 0;
}