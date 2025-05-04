#include "Bruxo.hpp"
#include <iostream>

using std::cout;

Bruxo::Bruxo(string nome, string casa, string feitico) {
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico);
}

void Bruxo::setNome(string nome) {
    m_nome = (nome.empty() ? "/Sem Nome/" : nome);
};

string Bruxo::getNome() const {
    return m_nome;
};

void Bruxo::setCasa(string casa) {
    bool isValid = (casa == "Grifinória") || (casa == "Sonserina") || (casa == "Lufa-lufa") || (casa == "Corvinal");

    m_casa = (isValid ? casa : " ");
}

string Bruxo::getCasa() const {
    return m_casa;
};

void Bruxo::setFeitico(string feitico) {
    m_feitico = feitico;
};

string Bruxo::getFeitico() const {
    return m_feitico;
};

void Bruxo::lancarFeitico() {
    cout << "Lançando feitiço " + m_feitico + "\n";
};
void Bruxo::Display() {
    cout << "[ " << m_nome << ", " << m_casa << ", " << m_feitico << " ]";
};