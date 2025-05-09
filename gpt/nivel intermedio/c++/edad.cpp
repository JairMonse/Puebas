#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string nombre;
    int edad;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Edad: ";
    cin >> edad;
    cout << (edad >= 18 ? "Es mayor de edad" : "Es menor de edad") << endl;
    return 0;
}