#pragma once

class ViraTempo {
    private:
        int sentido;
        int cont;
        int max;

    public:
        ViraTempo(int N) : sentido(1), cont(0), max(N) {};

        void mostrarTempo();

        void avancarTempo();

        void virarTempo();
};