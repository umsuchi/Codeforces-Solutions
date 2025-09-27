#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;

        int a = n/3;
        
        cout << a + (n % 3 == 1) << " " << a + (n % 3 == 2)<< endl;
    }

    return 0;
}