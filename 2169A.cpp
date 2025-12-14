#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        
        int num; cin >> num;
        for(int i=0; i<n; i++) cin >> v[i];

        int a=0, b=0;
        for(int i=0; i<n; i++) {
            if(v[i] < num) a++;
            if(v[i] > num) b++;
        }

        cout << ((a > b) ? num-1 : num+1) << endl;    
    }

    return 0;
}