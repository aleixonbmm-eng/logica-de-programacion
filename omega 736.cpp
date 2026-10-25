#include <iostream>
#include <string>
using namespace std;

int main() {

    string palabra1, palabra2, palabra3;

    cout << "Escribe si es vertebrado o invertebrado: ";
    cin >> palabra1;

    cout << "Escribe la clase (ave, mamifero, inseto o anelideo): ";
    cin >> palabra2;

    cout << "Escribe la alimentacion (carnivoro, onivoro, herbivoro o hematofago): ";
    cin >> palabra3;

    if (palabra1 == "vertebrado" && palabra2 == "ave" && palabra3 == "carnivoro")
    {
        cout << "aguia" << endl;
    }
    else if (palabra1 == "vertebrado" && palabra2 == "ave" && palabra3 == "onivoro")
    {
        cout << "pomba" << endl;
    }
    else if (palabra1 == "vertebrado" && palabra2 == "mamifero" && palabra3 == "onivoro")
    {
        cout << "homem" << endl;
    }
    else if (palabra1 == "vertebrado" && palabra2 == "mamifero" && palabra3 == "herbivoro")
    {
        cout << "vaca" << endl;
    }
    else if (palabra1 == "invertebrado" && palabra2 == "inseto" && palabra3 == "hematofago")
    {
        cout << "pulga" << endl;
    }
    else if (palabra1 == "invertebrado" && palabra2 == "inseto" && palabra3 == "herbivoro")
    {
        cout << "lagarta" << endl;
    }
    else if (palabra1 == "invertebrado" && palabra2 == "anelideo" && palabra3 == "hematofago")
    {
        cout << "sanguessuga" << endl;
    }
    else if (palabra1 == "invertebrado" && palabra2 == "anelideo" && palabra3 == "onivoro")
    {
        cout << "minhoca" << endl;
    }
    else
    {
        cout << "Combinacion no valida" << endl;
    }

    return 0;
}