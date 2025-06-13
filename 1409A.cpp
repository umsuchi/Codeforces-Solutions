#include <iostream>
using namespace std;

int main()
{
    long n , a , b;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b;
        int c , sum = 0 , rem;
        if(a > b) swap(a , b);
        int num = b - a;
        sum = num / 10;
        c = num % 10;
        if(c > 0) sum++;
        cout << sum << endl;
    }

    return 0;
}