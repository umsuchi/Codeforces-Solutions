#include <iostream>
using namespace std;

int main()
{
    int n , a = 0 ;
    cin >> n;
    
    for(int i = 0; i < n ; i++){
        int c ; 
        cin >> c;
        if(c == 1) {
            cout << "HARD" << endl;
            break;
        }
        a++;
    }

    if(a == n) cout << "EASY" << endl;

    return 0;
}