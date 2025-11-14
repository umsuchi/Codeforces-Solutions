#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);

        long long c=0;
        for(int i=0; i<n; i++){
            long long b; cin >> b;
            a[i] = (i + c >= b) ? a[i + c - b] : i + 1;

            c = b;
        }

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}