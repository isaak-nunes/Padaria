//Padaria
#include "Padeiro.h"
#include "cliente.h"

#include <thread>

#define VitrineMax 10
static int vitrine = 0;

void clientes(int &buffer, Cliente* cliente){
    while(1){
        while(buffer>0){
            cliente->comer(buffer);
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 milissegundos
        }
    }
}

void padeiros(int &buffer, Padeiro* padeiro){
    while(1){
        while(buffer<VitrineMax){
            padeiro->panificar(buffer);
            this_thread::sleep_for(chrono::milliseconds(100)); // 100 milissegundos
        }
    }
}

int main(){
    Cliente *cesar = new Cliente;
    Padeiro *murilo = new Padeiro;

thread fila(clientes, ref(vitrine), cesar);
thread cozinha(padeiros, ref(vitrine), murilo);

    fila.detach();
    cozinha.detach();

this_thread::sleep_for(chrono::milliseconds(5000)); // 5 segundos
    cesar->imprimir();
    murilo->imprimir();
    cout<< "vitrine: "<< vitrine <<endl;
    return 0;
}
