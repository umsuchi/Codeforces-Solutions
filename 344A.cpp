#include <iostream>
using namespace std;

int main()
{
    int n , c = 0;
    
    cin >> n;
    int p[n];

    for(int i = 0 ; i < n; i++)
        cin >> p[i];
    
    for(int i = 0 ; i < n ; i++){
        if(p[i] != p[i + 1]) c++;
        
    }

    cout << c << endl;

    return 0;
}