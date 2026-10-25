#include <iostream>
using namespace std;
int main () {

    int a,b,c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
     cout << "equilatero";
    }
    else if ( a == b && b != c)
    {
     cout << "isoseles";
    }
    else if  ( a != b && b != c && c != a)
    {
      cout << "escaleno";        
    }
       
    return 0;
}