#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        vector<string> s(10);
        for(int i=0; i<10; i++) cin >> s[i];

        int sum(0);
        for(int row=0; row<10; row++){
            for(int col=0; col<10; col++){
                if(s[row][col] == '.') continue;
                int r = (row < 9 - row) ? row : (9 - row);
                int c = (col < 9 - col) ? col : (9 - col);

                sum += (1 + (r < c ? r : c));
            }
        }

        cout << sum << endl;
    }

    return 0;
}