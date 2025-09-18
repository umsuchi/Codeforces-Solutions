#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int c = 0, d = 0;

        for(int i=0; i<n; i++) {
            cin >> a[i]; 
            if(a[i] == 1) c++;
            if(a[i] == 2) d++;
        }
        int sum = c + d * 2;

        if(sum % 2 != 0) cout << "NO" << endl;
        else {
            int h = sum /2;
            if(h % 2 == 0 || c > 0)
                cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }

    return 0;
}