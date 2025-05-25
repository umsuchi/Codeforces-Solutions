#include <iostream>
#include <set>
using namespace std;

int main()
{
    string letter;
    getline(cin , letter);
    set<char> let ;

    for(int i = 0; i < letter.size() ; i++)
       if(isalpha(letter[i])) let.insert(letter[i]);

    cout << let.size() << endl;

    return 0;
}