#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int rem = n / 10;
        int r = n % 10;
        cout << rem + r << endl;
    }

    return 0;
}