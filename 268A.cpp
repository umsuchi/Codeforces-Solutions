#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , c = 0;
    cin >> n;
    vector<pair<int , int>> t(n);
    for(int i = 0 ; i < n;  i++) cin >> t[i].first >> t[i].second;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
            if(i != j && t[i].first == t[j].second) c++;
    }
    
    cout << c << endl;

    return 0;
}