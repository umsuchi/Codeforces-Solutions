#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n , c = 0;
        string balloon;
        cin >> n >> balloon ;
        set<char> bal;
        for(int i = 0 ; i < n ; i++) bal.insert(balloon[i]);
        
        cout << n + bal.size() << endl;
        
    }

    return 0;
}