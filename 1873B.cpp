#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
           
    int n; cin >> n;
    long long int sum = 1;
    vector<int> a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
        
    sort(a.begin(), a.end());
    a[0]++;
    
    for(int i=0; i<n; i++) sum *= a[i];
        
    cout << sum << endl;

    }

    return 0;
}