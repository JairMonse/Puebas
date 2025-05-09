#include <iostream>
#include <vector>
#include <algorithm>

struct Producto {
    std::string nombre, categoria;
    int precio;
};

int main() {
    std::vector<Producto> productos = {
        {"A", "X", 30},
        {"B", "Y", 20},
        {"C", "X", 50}
    };

    std::vector<Producto> filtrados;
    std::copy_if(productos.begin(), productos.end(), std::back_inserter(filtrados),
        [](const Producto& p) { return p.categoria == "X"; });

    std::sort(filtrados.begin(), filtrados.end(),
        [](const Producto& a, const Producto& b) { return a.precio > b.precio; });

    for (const auto& p : filtrados)
        std::cout << p.nombre << ": " << p.precio << std::endl;
}
