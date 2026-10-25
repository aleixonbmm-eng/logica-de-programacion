#include <iostream>
using namespace std; 
int main ()  {
     
    int sw =0;      //1/2 − 2/3 + 3/4 − 4/5
    double s=0;
    for (int i=1; i<=4; i++) {
        if (sw ==0)  {
            s = s + (i/(i+1.0));
            sw=1;
        }
        else {
            s = s - (i/(i+1.0));
            sw=0;
        }
    }  
    cout <<"El resultado es :" << s << endl;
    return 0;
}                                      