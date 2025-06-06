#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , c = 0 , a = 0 ;
    cin >> n;
    vector<int> num;
    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    int max = num[0];
    int min = num[0];
    for(int i = 1 ; i < n; i++){
        if(num[i] > max) max = num[i] , c++;
        if(num[i] < min) min = num[i] , a++;
    }
    cout << c + a << endl;


    return 0;
}