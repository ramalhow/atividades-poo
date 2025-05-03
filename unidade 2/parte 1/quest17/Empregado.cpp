#include "Empregado.hpp"

Empregado::Empregado(string nome, string sobrenome, float salario) {
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

void Empregado::setNome(string nome) {
    m_nome = (m_nome.empty() ? "//Sem Nome//" : nome);
}

string Empregado::getNome() const {
    return m_nome;
}

void Empregado::setSobrenome(string sobrenome) {
    m_nome = (m_nome.empty() ? "//Sem Sobrenome//" : sobrenome);
}

string Empregado::getSobrenome() const {
    return m_sobrenome;
}

void Empregado::setSalario(float salario) {
    m_salario = (salario < 0 ? 0 : salario);
}

float Empregado::getSalario() const {
    return m_salario;
}