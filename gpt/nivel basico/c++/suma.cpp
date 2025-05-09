#include <iostream>
#include <sstream>
using namespace std;

int main() {
    cout << "Ingrese numeros separados por espacio: " << endl;
    string linea;
    getline(cin, linea);
    stringstream ss(linea);
    int num, suma = 0;
    while (ss >> num) suma += num;
    cout << "Suma: " << suma << endl;
    return 0;
}
