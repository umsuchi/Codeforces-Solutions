#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long a, b; cin >> a >> b;
    vector<long long> v;
    v.push_back(b);

    while(b > a){
        if(b % 2 == 0) b /= 2;
        else if(b % 10 == 1) b = (b-1) / 10;
        else break;
        v.push_back(b);
    }

    if(v.back() != a) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << v.size() << endl;
        for(int i=v.size()-1; i>=0; i--)
            cout << v[i] << " " << endl;
    }

    return 0;
}