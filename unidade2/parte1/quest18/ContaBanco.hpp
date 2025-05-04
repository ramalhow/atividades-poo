#pragma once

class ContaBanco {

    public:
        ContaBanco(double saldoInicial);

        void creditar(double valor);
        void debitar(double valor);
        double getSaldo() const;

    private:
        double m_saldo;
};