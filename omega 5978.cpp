#include <iostream>
#include <string>
using namespace std;
int main () {
    string NOMBRE1,NOMBRE2;
    int A,B;
    cout << "primer nombre = ";
    cin >> NOMBRE1,
    cout << "primer numero = ";
    cin >> A;
    cout << "segundo nombre = ";
    cin >> NOMBRE2;
    cout << "segundo numero = ";
    cin >> B;


    if (NOMBRE1>NOMBRE2 && A>B)
      {
        cout << NOMBRE1;
      }
    else
    {
        cout << NOMBRE2;
    }
    return 0;

}