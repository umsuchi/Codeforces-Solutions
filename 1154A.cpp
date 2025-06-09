#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num;
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);
    num.push_back(d);

    sort(num.begin() , num.end());
    
    cout << num[3] - num[0] << " " << num[3] - num[1] << " " << num[3] - num[2] << endl; 


    return 0;
}