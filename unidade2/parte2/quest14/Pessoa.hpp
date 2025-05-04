#include <string>

using std::string;

class Pessoa {

private:
    string m_nome;
    string m_cpf;
    bool m_CPFvalido;

public:
    Pessoa(string nome, string cpf);

    void setNome(string nome);
    string getNome() const;

    void setCPF(string cpf);
    string getCPF() const;

    void apresentar() const;
};