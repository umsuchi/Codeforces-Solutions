#include <iostream>
using namespace std;

int main()
{
    int n , c = 0;
    cin >> n;
    string stone;
    cin >> stone;

    for(int i = 0 ; i < stone.size() ; i++){
        if(stone[i] == stone[i + 1])
            c++;
    }

    cout << c << endl;

    return 0 ;
}