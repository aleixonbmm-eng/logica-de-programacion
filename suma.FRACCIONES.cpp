#include <iostream>
using namespace std;
int main () {

     int sw =0;   // 1/1 − 1/2 + 1/3 − 1/4 + 1/5
     int s =0;
      for (int i=1; i<=5; i++) {
        if (sw==0){
            s = s + (1.0/i);
            sw=1;
        }
          else {
            s = s - (1.0/i);
            sw=0;
        }
    }
        cout << "El resultado es : " << s << endl;
        return 0;
    
}