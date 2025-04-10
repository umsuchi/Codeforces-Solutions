#include <iostream>
using namespace std;

int main()
{
    int x , c = 0;
    cin >> x;

    for(int i = 5; i >= 1; i--){
        c += x / i;
        x %= i;
        if(x == 0)
            break;
    }

    cout << c << endl;
    
    return 0;
}