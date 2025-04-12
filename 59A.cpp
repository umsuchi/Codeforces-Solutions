#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int a = 0 , b = 0;

    for(int i = 0 ; i < s.size() ; i++){

        if(isupper(s[i])) a++;
        else b++;
        
    }

    if(a > b){
        for(int i = 0 ; i < s.size() ; i++)
            s[i] = toupper(s[i]);
    }

    else{
        for(int i = 0 ; i < s.size() ; i++)
            s[i] = tolower(s[i]);
    }

    cout << s << endl;

    return 0;
}