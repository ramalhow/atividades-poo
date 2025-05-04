#include "Cupom.hpp"

Cupom::Cupom(string id, string descricao, int quant, float preco) {
    setId(id);
    setDescricao(descricao);
    setQuant(quant);
    setPreco(preco);
}

string Cupom::getId() const {
    return m_id;
}

void Cupom::setId(string id) {
    m_id = id.empty() ? "ID_INVALIDO" : id;
}

string Cupom::getDescricao() const {
    return m_descricao;
}

void Cupom::setDescricao(string desc) {
    m_descricao = desc.empty() ? "Sem Descrição." : desc; 
}

int Cupom::getQuant() const {
    return m_quant;
}

void Cupom::setQuant(int quant) {
    m_quant = (quant < 0) ? 0 : quant;
}

float Cupom::getPreco() const {
    return m_precoItem;
}

void Cupom::setPreco(float preco) {
    m_precoItem = (preco < 0) ? 0 : preco;
}

float Cupom::calculaCupom() const {
    if( (m_quant < 0) || (m_precoItem < 0) ) {
        return 0;
    } else {
        return m_quant * m_precoItem;
    }
}