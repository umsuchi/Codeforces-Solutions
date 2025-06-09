#include <iostream>
using namespace std;

int main()
{
    int n , r , i = 1;
    cin >> n >> r;
    while(1){
        if((i * n) % 10 == 0) break;
        if((i * n - r) % 10 == 0) break;
        else i++;
    }
    cout << i << endl;

    return 0;
}