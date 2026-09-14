#include <iostream>
using namespace std;

int main() {
    // Pseudocódigo:
    // A = 5
    // B = 10
    // A += 3
    // B -= A

    int A = 5;
    int B = 10;
    A += 3;
    B -= A;
    cout << "A = " << A << ", B = " << B << endl;
    return 0;
}