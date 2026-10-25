#include <iostream>
using namespace std;
int main() {

    for (int i = 1; i <= 8; i++) {
        if (i != (i/2) * 2) {
            cout << i << " impar" << endl;
        } else {
            cout << i << " par" << endl;
        }
    }
    return 0;
}