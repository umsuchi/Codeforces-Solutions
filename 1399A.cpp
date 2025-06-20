#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n , c = 0;
        cin >> n;
        vector<int> num(n);
        for(int j = 0 ; j < n ; j++) cin >> num[j];
        sort(num.begin() , num.end());
        for(int j = 1 ; j < n ; j++){
            if(num[j] - num[j - 1] > 1) {
                c++;
                cout << "NO" << endl;
                break;
            }
            
        }
        if(c == 0) cout << "YES" << endl;
        
    }

    return 0;
}