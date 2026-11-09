#include  "Cliente.h"

void Cliente ::imprimir(){
    cout<< "paes comidos : "<< paes_comidos <<endl;
}

void Cliente :: comer(int &vitrine){
    vitrine--;
    paes_comidos++;
}