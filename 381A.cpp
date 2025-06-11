#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n , x = 0 , y = 0 , l = 0 ;
    cin >> n;
    int r = n - 1;
    vector<int> num;
    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }

    for(int i = 0 ; l <= r ; i++){
        if(i % 2 == 0){
            if(num[l] >= num[r]) x += num[l++];
            else x += num[r--];
        }else{
            if(num[l] >= num[r]) y+= num[l++];
            else y += num[r--];
        }
    }

    cout << x << " " << y << endl;

    return 0;
}