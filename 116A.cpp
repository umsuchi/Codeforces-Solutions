#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int a , b , ma = 0 , sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        cin >> a >> b;
        sum -= a ; 
        sum += b;
        ma = max(ma , sum); 
    }

    cout << ma << endl;

    return 0;
}