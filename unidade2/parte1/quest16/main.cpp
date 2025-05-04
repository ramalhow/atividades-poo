#include <iostream>
#include "Empregado.hpp"

using std::cout;

int main() {

    Empregado emp1 {"Bruno", "Silva", 1518.0f};
    Empregado emp2 {"Carol", "Souza", 2217.0f};

    // aplicando o aumento de 10% em cada empregado
    emp1.setSalario( emp1.getSalario() * 1.1f);

    emp2.setSalario( emp2.getSalario() * 1.1f);

	return 0;
}