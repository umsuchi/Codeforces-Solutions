#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int d; cin >> d;
        string ss; cin >> ss;

        string str; cin >> str;
        string left, right;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'V') left += ss[i];
            else right += ss[i];
        }

        reverse(left.begin(), left.end());
        s = left + s + right;

        cout << s << endl;
    }

    return 0;
}