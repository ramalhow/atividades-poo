#pragma once
#include <string>

using std::string;

class Empregado {

    public:
        Empregado(string nome, string sobrenome, float salario);

        void setNome(string nome);
        string getNome() const;

        void setSobrenome(string sobrenome);
        string getSobrenome() const;

        void setSalario(float salario);
        float getSalario() const;

    private:
        string m_nome;
        string m_sobrenome;
        float m_salario;
};