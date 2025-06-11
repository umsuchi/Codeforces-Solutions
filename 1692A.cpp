#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int a , count = 0;
        cin >> a;
        for(int j = 0 ; j < 3 ; j++){
            int b ;
            cin >> b;
            if(a < b) count++;
        }
        cout << count << endl;
    }

    return 0;
}