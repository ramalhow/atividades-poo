#include "Cupom.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    Cupom cp;

    cp.addItem({"A001", "Celular", 1, 1200});
    cp.addItem({"A002", "Televisão 55' 4K", 1, 4500});
    cp.addItem({"A003", "Notebook", 1, 3500});
    cp.addItem({"A004", "Headfone", 2, 150});
    cp.addItem({"A005", "SSD 120GB", 3, 200});

    Item i = cp.get("A003"); // retorna o item 'Notebook'
    cout << "(ID: " << i.m_id << ") " << i.m_descricao << " - Preço: " << i.m_precoItem << endl;

    cout << "Total do cupom: " << cp.calculaCupom() << endl;

    cp.imprimirNota();
}