#include  "Padeiro.h"

void Padeiro :: imprimir(){
    cout<< "paes assados : "<< paes_feitos <<endl;
}

void Padeiro :: panificar(int &vitrine){
    vitrine++;
    paes_feitos++;
}