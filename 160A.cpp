#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0, s = 0;
    for (int i = 0; i < n; ++i) {cin >> v[i]; sum += v[i];}
    
    sort(v.begin(), v.end());
    
    int c = 0;
    for(int i=n-1; i>=0; i--){
        s += v[i];
        c++;
        if(s > sum - s) break;
    }
   
    cout << c << endl;

    return 0;
}