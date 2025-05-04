#include "Pessoa.hpp"

int main() {
    Pessoa joao("", "12345678901", true); // nome inválido, mas cpf é válido
    joao.apresentar();

    Pessoa gabriel("Gabriel Souza", "2-0934-20"); // cpf inválido
    gabriel.apresentar();

    Pessoa thais("Thaís Silva", "09876543213"); // pessoa válida
    thais.apresentar();
}