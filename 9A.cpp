#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
      return gcd(a - b, b);

    return gcd(a, b - a);
}

int main()
{
    int a , b ;
    cin >> a >> b;
    int m = max(a , b);

    int num , den;
    num = 6 - m + 1;
    den = 6;
    int n = gcd(num , den);

    cout << num / n << "/" << den / n << endl;

    return 0;
}