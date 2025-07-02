#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int m = 0;
    for(int i = 0; i < n ; i++) m = max(m , a[i]);
    int s = 0 ;
    for(int i = 0 ; i < n ; i++) s += m - a[i];
    cout << s << endl;

    return 0;
}