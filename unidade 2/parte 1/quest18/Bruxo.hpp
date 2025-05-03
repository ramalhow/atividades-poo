#pragma once
#include <string>

using std::string;

class Bruxo {

    public:
        Bruxo(string nome, string casa, string feitico);

        void setNome(string nome);
        string getNome() const;

        void setCasa(string casa);
        string getCasa() const;

        void setFeitico(string feitico);
        string getFeitico() const;

        void lancarFeitico();
        void Display();

    private:
        string m_nome;
        string m_casa;
        string m_feitico;
    };