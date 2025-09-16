#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int c=0, i=1;

    while(i <= n){
        c += (i*i + i) / 2;

        if(c > n) {
            cout << i-1 << endl;
            break;
        }else if(c == n) {
            cout << i << endl;
            break;
        }

        i++;
    }

    return 0;
}