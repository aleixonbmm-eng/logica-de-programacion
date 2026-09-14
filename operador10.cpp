#include <iostream>
using namespace std;

int main() {
    // Pseudocódigo:
    // A = 7
    // B = 3
    // C = ++A + B--

    int A = 7;
    int B = 3;
    int C = ++A + B--;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    return 0;
}