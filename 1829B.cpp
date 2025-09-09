#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int m = 0, c = 0, n;
        cin >> n;
        
        int a[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            if(a[i] == 0) c++, m = max(c, m);
            else c = 0;
        }

        cout << m << endl;
    }

    return 0;
}