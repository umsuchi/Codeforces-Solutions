#include <iostream>
using namespace std;

int check(long n){
    for(long i = 2 ; i < n ; i++)
        if(n % i == 0) return 1;
    return 0;
}
int main()
{
    long n , a , b;
    cin >> n;
    a = 4;
    b = n - 4;
    for(long i = 0 ; i <= n ; i++){
        if(check(a) == 1 && check(b) == 1) break;
        a++,b--;
    }
    cout << a << " " << b << endl;

    return 0;
}