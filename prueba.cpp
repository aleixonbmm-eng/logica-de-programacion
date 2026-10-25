#include <iostream>
using namespace std;
int main () {
   
    int sw =0;
    for (int i=0; i<=5; i++)
    {
     if (i % 2 != 0) {
        cout << "si" << endl;
        sw =5;
     }
     else {
        cout << "no" << endl;
        sw=9;
     }
    }
    return 0;
}