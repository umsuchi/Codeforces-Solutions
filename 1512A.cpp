#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n , c = 0;
        cin >> n;
        int num[n];
        for(int i = 0 ; i < n ; i++) cin >> num[i];
        if(num[0] != num[1] && num[1] == num[2]) c = 0;
        else if(num[n - 1] != num[n - 2] && num[n - 2] == num[n-3]) c = n - 1;
        else{
            for(int i = 1; i < n ; i++)
                if(num[i] != num[i + 1] && num[i] != num[i - 1]) {c = i; break;}
        }
        cout << c + 1 << endl;
        
    }

    return 0;
}