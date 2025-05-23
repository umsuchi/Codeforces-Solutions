#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
        
    int min , max , min_ind , max_ind;
    min = a[0];
    max = a[0];
    min_ind = 0;
    max_ind = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(min >= a[i])
            min = a[i] , min_ind = i;
        if(max < a[i]) 
            max = a[i] , max_ind = i;
    }

    int t = max_ind + (n - 1 - min_ind);
    if(max_ind > min_ind) t--;
    cout << t << endl;
    
    return 0;
}