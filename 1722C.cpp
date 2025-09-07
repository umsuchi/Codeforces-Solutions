#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<string>> player(3 , vector<string>(n));
        map<string , int> s;

        for(int i = 0 ; i < 3 ; i++)
            for(int j = 0 ; j < n ; j++){
                cin >> player[i][j];
                s[player[i][j]]++;
            }

        for(int i = 0 ; i < 3 ; i++){
            int score = 0;
            for(const string& w : player[i]){
                if(s[w] == 1) score += 3;
                else if(s[w] == 2) score += 1;
            }
            cout << score << ' ';
        }
        cout << endl;
    }

    return 0;
}