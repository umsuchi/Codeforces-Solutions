#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;

        map<int, int>a;
        int c = 0;

        for(int i = 0 ; i < n ; i++) {
            int q; cin >> q;
            a[q]++;

            if(a[q] == 2) c = 1;
        }

        cout << (c ? "YES" : "NO") << endl;
    }  

    return 0;
}