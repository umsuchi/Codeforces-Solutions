#include <iostream>
using namespace std;

int main()
{
    int n , k , l , c , d , p , nl, np , count = 0 ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int lime = c * d;
    int salt = p / np;
    int litre = (k * l) / nl;
    int min = (lime < salt) ? lime : salt;
    min = (min < litre) ? min : litre;
    cout << min / n << endl;

    return 0;
}