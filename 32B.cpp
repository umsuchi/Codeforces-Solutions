#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string code;
    cin >> code ;
    vector<int> num;
    for(int i = 0 , k = 0; i < code.size() ; i++ , k++){
        if(code[i] == '.') num.push_back(0);
        if(code[i] == '-'){
            if(code[i + 1] == '.') num.push_back(1) , i++;
            else if(code[i + 1] == '-') num.push_back(2) , i++;
        }
    }
    for(int i = 0 ; i < num.size() ; i++) cout << num[i] ;
    cout << endl;

    return 0;
}