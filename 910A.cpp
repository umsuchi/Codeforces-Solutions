#include <iostream>
using namespace std;

int main()
{
    int n, b; cin >> n >> b;
    int c=0;
    string s; cin >> s;

    bool v=true;
    
    for(int i=0; i<n-1;){
        bool v=false;
        int j=i;

        i = min(n-1, i+b);
        if(s[i] != '1'){
            for(int k=i; k>j; k--){
                if(s[k] == '1'){
                    i = k;
                    v=true;
                    break;
                }
            }
        } else v=true;
        if(v == false){
            c = -1;
            break;
        } c++;
    }

    cout << c << endl;

    return 0;
}