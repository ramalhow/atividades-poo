#include "Pessoa.hpp"
#include <iostream>

using std::cout;

Pessoa::Pessoa(string nome, string cpf) {
    setNome(nome);
    setCPF(cpf);
};

void Pessoa::setNome(string nome) {
    m_nome = nome.empty() ? "/SEM NOME/" : nome;
};

string Pessoa::getNome() const {
    return m_nome;
};

void Pessoa::setCPF(string cpf) {

    // os últimos 2 digitos (que vem depois do hifen) estão nessas posições:
    const int digito1 = int(cpf[9]) - int('0');
    const int digito2 = int(cpf[10]) - int('0');

    // validação do primeiro digito
    int result = 0;
    int coef = 10;

    for(int i = 0; i < 9; i++) {
        const int digit = int(cpf[i]) - int('0');
        result += digit * coef;

        coef -= 1;
    }
    bool primeiroDigitoValido = ( (result * 10) % 11 ) == digito1;

    // validação do segundo digito
    result = 0;
    coef = 11;

    for(int i = 0; i < 10; i++) {
        const int digit = int(cpf[i]) - int('0');
        result += digit * coef;

        coef -= 1;
    }
    bool segundoDigitoVálido = ( (result * 10) % 11 ) == digito2;

    m_CPFvalido = (cpf.size() == 11) && primeiroDigitoValido && segundoDigitoVálido;
    m_cpf = (m_CPFvalido) ? cpf : "";
};
string Pessoa::getCPF() const {
    return m_cpf;
};

void Pessoa::apresentar() const {

    cout << "[ " << m_nome << ", ";
    cout << m_cpf << ", ";
    cout << (m_CPFvalido ? "'Válido'" : "'Inválido'") << " ]\n";
};