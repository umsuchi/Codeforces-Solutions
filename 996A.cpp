#include <iostream>
using namespace std;

int main()
{
    int n , c = 0;
    cin >> n;

    while(n != 0){
        if(n >= 100){
            c += n / 100;
            n %= 100;
        }
        if(n >= 20 && n < 100){
            c += n /20;
            n %= 20;
        }
        if(n >= 10 && n < 20){
            c += n / 10;
            n %= 10;
        }
        if(n >= 5 && n < 10){
            c += n / 5;
            n %= 5;
        }else c += n , n = 0;
    }

    cout << c << endl;

    return 0;
}