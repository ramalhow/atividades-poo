#include "ContaBanco.hpp"
#include <iostream>

ContaBanco::ContaBanco(double saldoInicial) {
    m_saldo = (saldoInicial >= 0) ? saldoInicial : 0;
};

void ContaBanco::creditar(double valor) {
    m_saldo += valor;
};

void ContaBanco::debitar(double valor) {
    if (valor > m_saldo) {
        std::cout << "ERRO: não é possível debitar um valor maior que o saldo atual da conta\n";
    } else {
        m_saldo += valor;
    }
};
double ContaBanco::getSaldo() const {
    return m_saldo;
};
