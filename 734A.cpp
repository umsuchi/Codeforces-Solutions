#include <iostream>
using namespace std;

int main()
{
    int n , a = 0 , d = 0;
    cin >> n;

    string c ;
    cin >> c;

    for(int i = 0; i < n; i++){
        if(c[i] == 'A') a++;
        if(c[i] == 'D') d++;
    }

    if(a > d) cout << "Anton" << endl;
    else if(d > a) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}