#include <iostream>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--){
        int n , s = 0 , c = 0;
        cin >> n;
        while(c < n){
            s++;
            if(s % 3 != 0 && s % 10 != 3) c++;
        }

        cout << s << endl;
    }

    return 0;
}