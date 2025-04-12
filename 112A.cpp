#include <iostream>
using namespace std;

int main()
{
    string a , b;
    cin >> a >> b;
    long long i;
    
    for(i = 0; i < a.size() ; i++){
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] - 'A' + 97;

        if(b[i] >= 'A' && b[i] <= 'Z')
            b[i] = b[i] - 'A' + 97;
    }

    for(i = 0; i < a.size() ; i++){
        if(a[i] > b[i])
        {
            cout << 1 << endl; 
            return 0;
        }
        if(a[i] < b[i])
        {
            cout << -1 << endl; 
            return 0;
        }
    }
    cout << 0 << endl;
    
    return 0;
}