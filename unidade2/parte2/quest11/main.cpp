#include "Retangulo.hpp"
#include <iostream>

using std::cout;

int main() {
    Retangulo ret(5, 18);
    ret.desenhar();

    cout << "Area: " << ret.area() << "\n";
    cout << "Perímetro: " << ret.perimetro() << "\n";
}