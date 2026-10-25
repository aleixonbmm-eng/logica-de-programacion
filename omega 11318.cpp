#include <iostream>
using namespace std;
int main () {

    int A,B;
     cin >> A >> B;
    if (A+B==5)
    {
      B = B + 3;
        cout <<"RESLTADO 1 "<< (2*A + B);

    }
    else 
    {
        A = A - 1;
        if ((7*A + B)%2==0)
        {
          
          cout << "RESULTADO 2 " << (A = A - B);
        }
        else
        {
        cout << "RESULTADO 3 " << (A = A * B);
        }
        
    
    }

    return 0;
   
}