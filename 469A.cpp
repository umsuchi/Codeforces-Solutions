#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> guy;
    int n , p , q ;
    cin >> n;

    cin >> p;
    for(int i = 0 ; i < p ; i++) {
        int v;
        cin >> v ; 
        guy.push_back(v);
    }
    
    cin >> q ;
    for(int i = 0 ; i < q ; i++) {
        int v;
        cin >> v ; 
        guy.push_back(v);
    }

    sort(guy.begin() , guy.end());
    guy.erase(unique(guy.begin() , guy.end()) , guy.end());

    if(guy.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}



