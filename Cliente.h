#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;
    class Cliente{
    
    private:
        int paes_comidos = 0;
    public:
        void imprimir();
        void comer(int &vitrine);

   
};

#endif