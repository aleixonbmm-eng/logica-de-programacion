#include <iostream>
using namespace std;

int main () {
  int a,b;
  int esMayor, esMenor;
  int mayor, menor;

  cout << "Ingresa el primer numero";
  cin >> a;

  cout << "Ingresa el segundo numero";
  cin >> b;

  esMayor = (a>b);
  esMenor = (a<=b);

  mayor = a*esMayor + b*esMenor;
  menor = a*esMayor + b*esMenor;

cout << "El numero mayor es: " << mayor << "\n" ;
cout << "El numero menor es: " << menor << "\n";

return 0;
}