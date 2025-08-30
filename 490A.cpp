#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec[3];

    for(int i = 1 ; i <= n ; i++){
        int v;
        cin >> v;
        vec[v - 1].push_back(i);
    }

    int minv = min(vec[0].size() , min(vec[2].size() , vec[1].size()));
    
    cout << minv << endl;
    for(int i = 0 ; i < minv ; i++) cout << vec[0][i] << " " << vec[1][i] << " " << vec[2][i] << endl;

    return 0;
}   