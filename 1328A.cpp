#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        long a , b , t;
        cin >> a >> b;

        if(a % b == 0) cout << 0 << endl;
        
        else{
            t = a % b;
            cout << b - t << endl;
        }
        
    }

    return 0;
}