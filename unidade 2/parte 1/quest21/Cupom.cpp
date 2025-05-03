#include "Cupom.hpp"
#include <iostream>

Cupom::Cupom() {

    // pré aloca 20 espaços para o máximo possível de items no cupom.
    list.reserve(20);
}

void Cupom::addItem(Item i) {
    if(list.size() < 20) {
        list.push_back(i);
    }
}

Item Cupom::get(string id) const {
    for(auto& elem : list) {
        if(elem.m_id == id) return elem;
    }

    std::cout << "ERRO: Item não ";
    return {};
}

float Cupom::calculaCupom() const {

    float total = 0;
    for(auto& elem : list) {
        total += elem.m_quant * elem.m_precoItem;
    }

    return total;
}

void Cupom::imprimirNota() {

    std::cout << "Nota: \n" << "[ \n";
    
    float totalNota = 0;

    for(auto& elem : list) {

        float t = elem.m_precoItem * elem.m_quant;
        totalNota += t;

        std::cout << "\t" << "Item: " << elem.m_descricao;
        std::cout << " - Total do Item: " << t << ";\n";
    }

    std::cout << " ]\n";
    std::cout << "Total nota: " << totalNota << "\n";
}