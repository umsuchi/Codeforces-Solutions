#include <iostream>
using namespace std;

int main()
{
    long long n, t; cin >> n >> t;
    
    if(t <= (n + 1) / 2) cout << t * 2 - 1 << endl;
    else cout << (t - (n + 1) / 2) * 2 << endl;
    
    return 0;
}