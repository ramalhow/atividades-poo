#pragma once
#include <string>

using std::string;

class Cupom {
    public:
        Cupom(string id, string descricao, int quant, float preco);

        string getId() const;
        void setId(string id);
        
        string getDescricao() const;
        void setDescricao(string desc);
        
        int getQuant() const;
        void setQuant(int quant);
        
        float getPreco() const;
        void setPreco(float preco);

        float calculaCupom() const;

    private:
        string m_id;
        string m_descricao;
        int m_quant;
        float m_precoItem;
};