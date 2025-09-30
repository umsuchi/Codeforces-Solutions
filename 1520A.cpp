#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
        bool vis[26] = {0};
        bool con(true);

        for(int i=0; i<s.size(); i++){
            if(i == 0 || s[i] != s[i - 1]){
                if(vis[s[i] - 'A']){
                    con = false;
                    break;
                }else vis[s[i] - 'A'] = true;
            }
        }

        cout << (con ? "YES" : "NO") << endl;
    }

    return 0;
}