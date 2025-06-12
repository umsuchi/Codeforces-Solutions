#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        string c;
        cin >> c;
    
        if(c[0] + c[1] + c[2] == c[3] + c[4] + c[5]) 
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}