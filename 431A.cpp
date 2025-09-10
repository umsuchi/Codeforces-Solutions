#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d; cin >> a>> b>> c>> d;
    string s; cin >> s;

    int sum = 0;
    for(auto i : s){
        switch(i){
            case '1': sum += a; break;
            case '2': sum += b; break;
            case '3': sum += c; break;
            case '4': sum += d; break;
        }
    }
        
    cout << sum << endl;

    return 0;
}