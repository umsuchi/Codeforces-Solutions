#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[200005];
void check(int n){
    if(a[n] != 0) check(a[n]);

    cout << n << " ";
}

int main()
{
    cin >> n;

    for(int i=2; i<=n; i++)
        cin >> a[i];

    check(n);
    
    return 0;
}