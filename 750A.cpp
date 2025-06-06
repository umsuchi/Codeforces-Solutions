#include <iostream>
using namespace std;

int main()
{
    int n , t , i;
    cin >> n >> t;
    int time = 0 , c = 0;
    int contest = 240 - t;
    for(i = 1 ; i <= n ; i++){
        time += i * 5;
        if(time <= contest) c++ ;
        else break;
    }
    
    cout << c << endl;

    return 0;
}