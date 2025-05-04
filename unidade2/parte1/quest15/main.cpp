#include <iostream>
#include <string>
#include <format>

#include "Carro.hpp"

using std::cout, std::format;

int main() {
	Carro possante{"Renault", "Duster", 2024};
	
	cout << possante.toString();
	
	return 0;
}