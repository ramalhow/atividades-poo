#include <string>

using std::string;

class Pessoa {

private:
    string m_nome;
    string m_cpf;
    bool m_CPFvalido;

public:
    Pessoa(string nome, string cpf="0000000000", bool cpfValido = false);

    void setNome(string nome);
    string getNome() const;

    void setCPF(string cpf);
    string getCPF() const;

    void setCPFvalido(bool valido);
    bool getCPFvalido() const;

    void apresentar() const;
};