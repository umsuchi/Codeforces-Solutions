#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n , t ; 
    string a; 
    cin >> n >> t >> a;

    for(int i = 0 ; i < t ; i++){
        for(int j = 1; j < n  ; j++){
            
            if(a[j - 1] == 'B' && a[j] == 'G'){
                swap(a[j] , a[j - 1]);
                j++;
            }
                
        }
    }

    cout << a << endl;

    return 0 ;
}