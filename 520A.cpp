#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    string s ;
    cin >> s;
    vector<bool> alp(28 , 0) ;

    for(int i = 0 ; i < n ; i++) alp[tolower(s[i]) - 'a'] = 1;
    
    for(int i = 0 ; i < 26 ; i++){
        if(!alp[i]){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}