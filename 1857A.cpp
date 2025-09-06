#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++) cin >> a[i];

        int odd = 0 , even = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] & 1) odd += a[i];
            else even += a[i];
        }

        if(((odd % 2 == 0) && (even % 2 == 0)) || (odd & 1 && even & 1))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}