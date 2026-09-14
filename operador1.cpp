#include <iostream>
using namespace std;

int main() {
    // Pseudocódigo:
    // X = 10
    // Y = 4
    // X = X + Y
    // Y = X - Y
    // X = X - Y

    int X = 10;
    int Y = 4;
    X = X + Y;
    Y = X - Y;
    X = X - Y;
    cout << "X = " << X << ", Y = " << Y << endl;
    return 0;
}