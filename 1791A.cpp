#include <iostream>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        int count = 0;
        string code = "codeforces";
        for(int i = 0 ; i < code.size() ; i++) if(c == code[i]) count++;
        if(count == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}