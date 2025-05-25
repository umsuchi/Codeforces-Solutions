#include <iostream>
using namespace std;

int main()
{
    int n , face = 0;
    string shape;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> shape;
        if(shape == "Tetrahedron") face += 4;
        if(shape == "Cube") face += 6;
        if(shape == "Octahedron") face += 8;
        if(shape == "Dodecahedron") face += 12;
        if(shape == "Icosahedron") face += 20;
    }

    cout << face << endl;

    return 0;
}