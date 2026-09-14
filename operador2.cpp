#include <iostream>
using namespace std;

int main() {
    // Pseudocódigo:
    // A = 5
    // B = 10
    // C = (A++ + ++B) * 2

    int A = 5;
    int B = 10;
    int C = (A++ + ++B) * 2;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    return 0;
}