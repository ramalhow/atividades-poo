#pragma once
#include "Item.hpp"
#include <vector>

class Cupom {
    public:
        Cupom();

        Item get(string id) const;

        void addItem(Item i);

        float calculaCupom() const;

        void imprimirNota();

    private:
        std::vector<Item> list; 
};