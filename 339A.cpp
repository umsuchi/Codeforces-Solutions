#include <iostream>
using namespace std;

int main()
{
    string in;
    cin >> in;

    for(int i = 0; i < in.size() - 1 ; i += 2){
        for(int j = 0; j < in.size() - i - 1; j += 2){
            if(in[j] > in[j + 2])
                swap(in[j] , in[j + 2]);
        }
    }

    for(int i = 0; i < in.size() ; i++){
        cout << in[i] ;
    }

    cout << endl;

    return 0;
}