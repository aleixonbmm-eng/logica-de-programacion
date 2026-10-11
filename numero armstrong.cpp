#include <iostream>
using namespace std;
int main () {
    int numero, a, b, c, d, suma;
     cout << "ingrese el numero = ";
     cin >> numero;

     a = numero % 10;
     b = (numero / 10) % 10;
     c = (numero / 100) % 10;
     d = numero / 1000;
     suma = a*a*a*a + b*b*b*b + c*c*c*c + d*d*d*d;
     if (numero >= 1000 && numero <= 9999) {
          cout << ((numero == suma)? "es un numero armstrong" : "no es un numero armstrong");
        }
        else if (numero < 1000) {
           cout << "el numero es menor de cuatro cifras" << endl;
        }       
        else {
            cout << "el numero es mayor de cuatro cifras" << endl;
        }
     return 0;
}