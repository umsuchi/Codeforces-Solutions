#include <iostream>
using namespace std;

int main()
{
    int n;
    string ch;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> ch;
        if((ch[0] == 'Y' || ch[0] == 'y') && (ch[1] == 'e' || ch[1] == 'E') && (ch[2] == 's' || ch[2] == 'S'))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}