#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a >= 0 && a <= 3) cout << "Alice" << endl;
        else if((a % 4 == 0)) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }

    return 0;
}