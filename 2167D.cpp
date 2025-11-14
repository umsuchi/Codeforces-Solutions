#include <iostream>
#include <vector>
using namespace std;

int gcd(long long a, int b){
    while(a > 0 && b > 0){
        if(a > b) a %= b;
        else b %= a;
    }

    if(a == 0) return b;
    else if(b == 0) return a;
    else return 1;
}

// bool check(int a, int b){
//     if(gcd(a, b) == 1) return true;
//     else false;
// }

void ans(){
    int n; cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    for(int c=2; c<100; c++){
		for(int i=0; i<n; i++){
			if(gcd(v[i], c) == 1){
		        cout<< c <<endl;
			    return;
			}
		}
	}
	cout << "-1" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        ans();

    return 0;
}