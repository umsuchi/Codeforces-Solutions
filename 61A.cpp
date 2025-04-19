#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a , b , c;
    cin >> a >> b;
    int n = a.size();

    for(int i = 0; i < n ; i++){
        if(a[i] != b [i]) c += '1';
        
        else c += '0';
    }

    cout << c << endl;

    return 0;
}