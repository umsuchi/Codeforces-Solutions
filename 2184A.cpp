#include<iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        cout << (n <= 3 ? n : (n & 1)) << endl;
    }

    return 0;
}