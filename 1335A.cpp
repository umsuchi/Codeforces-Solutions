#include <iostream>
using namespace std;

int main()
{
    int t , n;
    cin >> t;

    for(int i = 0; i < t ; i++){
        cin >> n;
        if(n & 1) cout << n / 2 << endl;
        else cout << n / 2 - 1 << endl;
    }

    return 0;
}