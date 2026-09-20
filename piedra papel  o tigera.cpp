#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int computadora, jugador;

    computadora = rand() % 3 + 1;

    cout << "Elige: 1 = Piedra, 2 = Papel, 3 = Tijera" << endl;
    cin >> jugador;

    cout << "La computadora eligió: " << computadora << endl;
    cout << "Tú elegiste: " << jugador << endl;

    if (jugador == computadora)
    {
        cout << "Empate";
    }
    else if ( (jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2) )
    {
        cout << "¡Ganaste!";
    }
    else
    {
        cout << "Perdiste";
    }

    return 0;
}