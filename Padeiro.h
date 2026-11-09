#ifndef PADEIRO_H
#define PADEIRO_H

#include <string>
#include <iostream>

using namespace std;
    class Padeiro{
    
    private:
        int paes_feitos = 0;
    public:
        void imprimir();
        void panificar(int &vitrine);

   
};

#endif