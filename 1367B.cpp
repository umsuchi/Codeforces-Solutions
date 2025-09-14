#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, o=0, e=0; cin >> n;
        vector<int> a(n);

        for(int i=0; i<n; i++) {
            cin >> a[i];

            if(i%2 != a[i]%2) a[i]%2 == 1 ? o++ : e++;
        }
        
        cout << (o == e ? o : -1) << endl;
    }

    return 0;
}