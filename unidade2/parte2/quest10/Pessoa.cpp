#include "Pessoa.hpp"
#include <iostream>

using std::cout;

Pessoa::Pessoa(string nome, string cpf, bool cpfValido) {
    setNome(nome);
    setCPF(cpf);
    setCPFvalido(cpfValido);
};

void Pessoa::setNome(string nome) {
    m_nome = nome.empty() ? "/SEM NOME/" : nome;
};

string Pessoa::getNome() const {
    return m_nome;
};

void Pessoa::setCPF(string cpf) {

    if ( (cpf != "0000000000") && (cpf.size() == 11) ) {
        m_cpf = cpf;
        m_CPFvalido = true;
    } else {
        m_cpf = "00000000000";
        m_CPFvalido = false;
    }
};
string Pessoa::getCPF() const {
    return m_cpf;
};

void Pessoa::setCPFvalido(bool valido) {
    setCPF(m_cpf); // forçamos a validação do cpf novamente
};

bool Pessoa::getCPFvalido() const {
    return m_CPFvalido;
};

void Pessoa::apresentar() const {

    cout << "[ " << m_nome << ", ";
    cout << m_cpf << ", ";
    cout << (m_CPFvalido ? "'Válido'" : "'Inválido'") << " ]\n";
};