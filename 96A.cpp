#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    
    int c = 1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) 
            c++;
        else{
            if(c >= 7) break;
            else c = 1;
        }
    }
    cout << (c >= 7 ? "YES" : "NO") << endl;

    return 0;
}