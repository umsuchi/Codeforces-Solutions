#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, b;

        cin >> a;
        b = a;

        for(int i=1; i<n; i++){
            cin >> a;
            b = (a+b < b+a) ? a+b : b+a;
        }
        
        cout << b << endl;
    }

    return 0;
}