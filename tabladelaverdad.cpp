#include <iostream>
using namespace std;

int main() {
    int edad;
    bool vip;
    bool ingreso;

    cin >> edad >> vip;
    ingreso = (edad >= 18) && vip;
    cout << ingreso;
}
