#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        long long a = 0, b = 0;
        bool flag = false;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((v[j] % v[i]) % 2 == 0){
                    a = v[i];
                    b = v[j];
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout << a << " " << b << endl;
        else cout << -1 << endl;
    }

    return 0;
}