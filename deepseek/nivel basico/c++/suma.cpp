#include <iostream>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "La suma es: " << suma(num1, num2) << endl;
    return 0;
}