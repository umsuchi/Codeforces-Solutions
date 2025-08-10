#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long n , a = 0 , b = 0;
        cin >> n;
        long s[n];
        for(long i = 0 ; i < n ; i++){
            cin >> s[i];
            if(s[i] >= a) b = a , a = s[i];
            else if(s[i] > b) b = s[i];
        }
        
        for(long i = 0 ; i < n ; i++)
            cout << s[i] - ((s[i] == a) ? b : a) << " ";
    }

    return 0;
}