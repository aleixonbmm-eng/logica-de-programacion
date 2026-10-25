#include <iostream>
using namespace std;
int main() {
   
    for (int i=1; i<=6; i++){
        for ( int j=1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;   //Triángulo de asteriscos (el que quedó pendiente). Dibuja un triángulo de 6 filas: la fila 1 tiene un *, la 2 tiene dos, y así hasta 6. Ya viste la estructura en la foto del for anidado

}