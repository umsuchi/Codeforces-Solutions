#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n , s;
        cin >> n >> s;
        int left = 0 , right = 0;
        for(int i = 0 ; i < n ; i++) {
            int a;
            cin >> a ;
            if(a < s){
                int u = s - a;
                left = (left > u ?  left : u) ;
            } else {
                int u = a - s;
                right = (right > u ? right : u);
            }
        }
        int sum = left + right + (left < right ? left : right) ;
        cout << sum << endl;
    }

    return 0;
}