#include <iostream>
using namespace std;

int main()
{
    int rem , c = 0;
    long long n;
    cin >> n;

    while (n != 0){
        rem = n % 10;
        if(rem == 4 || rem == 7)
        {
           c++; 
        }
        n /= 10;
    }

    if(c == 4 || c == 7)
        cout << "YES" << endl;

    else 
        cout << "NO" << endl;
    
    return 0;
}