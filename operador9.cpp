#include <iostream>
using namespace std;

int main() {
    // Pseudocódigo:
    // X = 5
    // Y = ++X * X--

    int X = 5;
    int Y = ++X * X--;
    cout << "X = " << X << ", Y = " << Y << endl;
    return 0;
}