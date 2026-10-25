#include <iostream>
using namespace std;
int main ()  {
    int numero, a, b, c, d;
     cout << "ingrese el nunmero = ";
     cin >> numero;
     a = numero % 10;
     b = (numero / 10) % 10;
     c = (numero /100) % 10;
     d = numero / 1000;
    
     if ( numero >= 1000 && numero <= 9999) {
       cout  << (( c == b && d == a )? "es un numero capicua" : "no es un numero capicua") << endl;
        }    
     else if (numero < 1000)
    {
       cout << "el numero es menor de cuatro cIfras, es incorecto"<< endl;
    }           
    else 
    {
        cout << "el numero es mayor de cuatro cifras, es execivo"<< endl;
    }
    return 0;
}