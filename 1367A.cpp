#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        string b;

        for(int i = 0 ; i < a.size() ; i++){
            if(i & 1 && i > 0 && a[i] == a[i + 1]) continue;
            else b += a[i]; 
        }

        cout << b << endl;
    }

    return 0;
}