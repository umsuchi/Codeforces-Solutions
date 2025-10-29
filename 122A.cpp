#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0)
        cout << "YES" << endl;
    else {
        while(n != 0){
            int rem = n % 10;
            if(rem == 4 || rem == 7) n /= 10;
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }

    return 0;
}