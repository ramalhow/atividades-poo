#include "Pessoa.hpp"

int main() {
    Pessoa joao("João Silva","52998224725");
    joao.apresentar(); // cpf válido

    Pessoa hugo("Hugo Costa", "1111111111"); 
    hugo.apresentar(); // cpf inválido => é tudo repetido

    Pessoa ana("Ana Clara","1234567812"); 
    ana.apresentar(); // cpf inválido => sequencia obvia

    Pessoa julia("Julia Souza","98327409234");
    julia.apresentar(); // cpf inválido => sequencia de tamanho diferente de 11 digitos
}