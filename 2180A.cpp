#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int a, b, c, d=0; cin >> a >> b >> c;
        for(int i=0; i<a; i++){
            d = max(d, (b + i*c)%a);
        }
        
        cout << d << endl;
    }

    return 0;
}