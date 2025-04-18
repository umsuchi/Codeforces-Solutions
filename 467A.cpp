#include <iostream>
using namespace std;

int main()
{
    int n , c = 0 ;
    int p , q;
    cin >> n;

    for(int i = 0; i < n ; i++){
        
        cin >> p >> q;

        if(q - p >= 2) c++;
    }

    cout << c << endl;

    return 0 ;
}