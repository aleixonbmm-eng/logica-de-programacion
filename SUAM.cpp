#include <iostream> 
using namespace std;
int main() {    
    int sw =0;
    int operacion =0;
    for (int i=0; i<=6; i++) {
        if (i % 2== 1) {
            operacion = operacion + i;
            sw =6;
        }
        else{
            operacion = operacion - i;
            sw=7;
        }
    }
    cout << "El resultado es = " << operacion << endl;
    return 0;
}