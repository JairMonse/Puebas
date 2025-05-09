#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

bool esPalindromo(string texto) {
    string limpio;
    for (char c : texto) {
        if (isalnum(c)) limpio += tolower(c);
    }
    string reverso = limpio;
    reverse(reverso.begin(), reverso.end());
    return limpio == reverso;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);
    cout << "¿Es palíndromo? " << (esPalindromo(cadena) ? "Sí" : "No") << endl;
    return 0;
}