#include <iostream>
using namespace std;

int main()
{
    int n , c = 0 , s = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a ;
        cin >> a;
        if(a < 0) c++;
        if(a < 0 && s > 0) c-- , s--;
        if(a > 0) s += a;
    }
    cout << c << endl;

    return 0;
}