#include <iostream>
using namespace std;
int main () { 
    int sw =0;                               
    int operacion =0;                 
    for (int i=2; i<=10; i += 2) 
    {            
        if (sw == 0)
         {
            operacion = operacion - i; 
            sw =1;
        }
        else
        {
            operacion = operacion + i;  
            sw=0;
        }
    }
    
 cout << "El resultado es : " << operacion << endl;
  return 0;
}    
