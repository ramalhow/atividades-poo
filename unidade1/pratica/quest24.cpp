#include <iostream> 
#include <string>

int main() {
    std::string name{};
    float notes[3] = {0};

    std::cout << "Digite seu nome: \n";
    std::cin >> name;

    for(int i = 0; i < 3; i++) {
        std::cout << "Digite a " << (i+1) << "° nota: \n";
        std::cin >> notes[i];
    }

    float median = (notes[0] * 3 + notes[1] * 4 + notes[2] * 5) / (3+4+5);

    std::cout << "o aluno " << name << " obteve média " << median;
}