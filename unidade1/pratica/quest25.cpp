#include <iostream>

int main() {
    float tanque{0}, quilometragem{0};
    while (true)
    {
        std::cin >> tanque;
        std::cin >> quilometragem;

        if (quilometragem == -1) break;

        std::cout << "Consumo: " << quilometragem/tanque << " KM/L" << std::endl;
    }
    
}