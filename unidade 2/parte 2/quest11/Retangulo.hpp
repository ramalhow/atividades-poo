
class Retangulo {
    private:
        double m_altura, m_largura;

        bool InRange(double valor);

    public:
        Retangulo(float altura=1.0, float largura=1.0);

        double getAltura() const;
        void setAltura(double altura);

        double getLargura() const;
        void setLargura(double largura);

        double perimetro() const;
        double area() const;

        void desenhar();
};