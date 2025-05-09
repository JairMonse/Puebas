#include <iostream>
#include <vector>
using namespace std;

double promedio(vector<double> lista) {
    if (lista.empty()) return 0;
    double suma = 0;
    for (double num : lista) suma += num;
    return suma / lista.size();
}

int main() {
    vector<double> numeros;
    cout << "Ingrese números separados por espacios (enter para terminar): ";
    double num;
    while (cin >> num) {
        numeros.push_back(num);
        if (cin.peek() == '\n') break;
    }
    cout << "El promedio es: " << promedio(numeros) << endl;
    return 0;
}