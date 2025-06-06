#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n , t;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        int c = 0 ;
        vector<int> num;

        while(t > 0){
            if(t % 10 != 0){
                int a = pow(10 , c);
                a *= (t % 10);
                num.push_back(a);
            }
            c++;
            t /= 10;
        }
        cout << num.size() << endl;
        for(int i = 0; i < num.size() ; i++) {
            cout << num[i] << (i != (num.size() - 1) ? " " : "\n");
        }
        
    }

    return 0;
}