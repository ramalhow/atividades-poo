#include "HugeInteger.hpp"
#include <iostream>
#include <ostream>

using std::cout, std::endl;

int main() {

    // recebendo um input
    HugeInteger a;
    a.input("123456789");

    cout << "Valor de A: ";
    a.output();
    cout << endl;

    HugeInteger b;
    b.input("987654321");

    cout << "Valor de B: ";
    b.output();
    cout << endl;

    // testando a soma
    a.add(b);

    cout << "Valor de A + B, salvo em A: ";
    a.output();
    cout << endl;

    // testando os operadores relacionais
    cout << "A > B ? = " << a.isGreaterThen(b) << endl;;
    cout << "A < B ? = " << a.isLessThen(b) << endl;

    HugeInteger c, d;
    c.input("100");
    d.input("100");

    cout << "C == D ? = " << c.isEqualTo(d) << endl;
    cout << "C != D ? = " << c.isNotEqualTo(d) << endl;

    cout << "C >= D ? = " << c.isGreaterThenOrEqual(d) << endl;
    cout << "C <= D ? = " << c.isLessThenOrEqual(d) << endl;
}