#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0 ; i < n ; i++) cin >> a[i];

        int sum = 1;
        for(int i = 0 ; i < n ; i++){
            int b; cin >> b;
            sum += (a[i] > b ? (a[i] - b) : 0);
        }
        
        cout << sum << endl;
    }

    return 0;
}