#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int n = name.size();
    int c = n;

    sort(name.begin(), name.end());

    for (int i = 0 ; i < n ; i++){
        if(name[i] == name[i + 1])
            c--;
    }

    if (c % 2 == 0) 
        cout << "CHAT WITH HER!" << endl;

    else 
        cout << "IGNORE HIM!" << endl;

    return 0;
}