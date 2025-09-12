#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum;
        
        if(n % 10 >= 2) sum = ((n % 10) - 1)* 10;
        else sum = 0;

        for(int i=1; n != 0 && i<=4; i++){
            if(n % 10 > 0) n /= 10, sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}