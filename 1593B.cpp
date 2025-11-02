#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int c=0;
        
        for(int i=0; i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                if(((s[i] - '0') * 10 + (s[j] - '0')) % 25 == 0)
                    c = s.size() - i - 2;
                
            }
        }

        cout << c << endl;
    }

    return 0;
}
