#include "ViraTempo.hpp"
#include <iostream>
#include <ostream>

using std::cout, std::endl;

void ViraTempo::mostrarTempo() {
    cout << cont << endl;
};

void ViraTempo::avancarTempo() {
    int next = cont + sentido;

    next = (next > max) ? max : next;

    next = (next < 0) ? 0 : next;

    cont = next;
};

void ViraTempo::virarTempo() {
    sentido *= -1;
}
