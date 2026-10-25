#include <iostream>
using namespace std;
int main () {
    int A,B;
    cin >> A >> B;

    if (A>B) 
    {
        cout << "El negocio si va a jalar" << endl;
    }
   else
    {
        cout << "Dejalo ya esta muerto" << endl;
    }
    
    cout << (A - B) << "\n";

    return 0;
}   