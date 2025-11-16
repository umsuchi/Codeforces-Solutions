#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int s=0,c=0;

        while(n--){
            int a; cin >> a;
            if(a == 1) continue;
            else if(a == -1) c++;
            s += (a == 0) ? 1 : 0;
        }

        s += (c & 1) ? 2 : 0;
        cout << s << endl;
    }

    return 0;
}