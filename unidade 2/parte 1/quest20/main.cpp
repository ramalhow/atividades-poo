#include "Cupom.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    Cupom cp("A097", "Celular", 2, 1050);

    cout << "ID do Cupom: " << cp.getId() << endl;
    cout << "Descrição: " << cp.getDescricao() << endl;
    cout << "Quantidade: " << cp.getQuant() << endl;
    cout << "Preço Unitário: R$ " << cp.getPreco() << endl;
    cout << "Valor Total: R$ " << cp.calculaCupom() << endl;
}