#include "ContaBanco.hpp"
#include <iostream>

int main() {
    ContaBanco conta1(1200);
    ContaBanco conta2(500);

    conta1.creditar(500);
    conta1.debitar(700);

    conta2.creditar(200);
    conta2.debitar(900); // aqui deve acionar o erro do debito acima do saldo da conta.

    std::cout << "Saldo da conta 1: " << conta1.getSaldo() << "\n";
    std::cout << "Saldo da conta 2: " << conta2.getSaldo() << "\n";
}