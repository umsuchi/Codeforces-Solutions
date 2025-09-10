#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n % i == 0) return 0;
    
    return 1;
}

int main()
{
    int a, b; cin >> a >> b;

    int c = a + 1;
    while(!isPrime(c)) c++;

    if(c == b) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}