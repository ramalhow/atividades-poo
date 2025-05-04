#include "Retangulo.hpp"
#include <iostream>

using std::cout;

Retangulo::Retangulo(float altura, float largura) {
    setAltura(altura);
    setLargura(largura);
};

bool Retangulo::InRange(double valor) {
    return (valor > 0.0) && (valor < 20.0);
}

double Retangulo::getAltura() const {
    return m_altura;
};

void Retangulo::setAltura(double altura) {
    m_altura = InRange(altura) ? altura : 1.0; 
};

double Retangulo::getLargura() const {
    return m_largura;
};

void Retangulo::setLargura(double largura) {
    m_largura = InRange(largura) ? largura : 1.0;
};

double Retangulo::perimetro() const {
    return (2*m_altura) + (2*m_largura);
};
double Retangulo::area() const {
    return m_altura * m_largura;
};

void Retangulo::desenhar() {

    // desenhando a horizontal
    cout << "+";
    for (int i = 0; i < m_largura; i++) cout << "-";
    cout << "+\n";

    // desenhando as verticais
    for (int i = 0; i < m_altura; i++) {
        cout << "|";
        for (int j = 0; j < m_largura; j++) cout << " ";
        cout << "|\n";
    }

    // desenhando a ultima horizontal
    cout << "+";
    for (int i = 0; i < m_largura; i++) cout << "-";
    cout << "+\n";
};