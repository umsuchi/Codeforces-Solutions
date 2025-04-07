#include <iostream>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    int a[n];

    for(int i = 0 ; i < n; i++){
        cin >> a[i] ;
    }

    int c = 0, t = a[k - 1] ;

    for(int i = 0 ; i < n; i++){
        if(a[i] >= t && a[i] > 0)
            c++;
    }

    cout << c << endl;

    return 0;
}