#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num;
    int a ;
    for(int i = 0; i < 3 ; i++) {
        cin >> a ;
        num.push_back(a);
    }
    sort(num.begin() , num.end());
    cout <<( num[2] - num[0]) << endl;

    return 0;
}