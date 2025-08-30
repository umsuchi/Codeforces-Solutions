#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        int m = max(a , b);
        int n = min(a , b);
        cout << m - n << endl;
    }

    return 0;
}