#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    mesas = new MesaDeRestaurante[32];
    qMesas = 0;
}
void RestauranteCaseiro::adicionaAoPedido(int nMesa, Pedidos novoPedido){
    mesas[nMesa].adicionaPedido(novoPedido);
}
double RestauranteCaseiro::calculaTotal(){
    double total = 0;
    for(int i = 0; i < qMesas; i++){
        total += this->mesas[i].calculaTotal();
    }
    return total;
}

void RestauranteCaseiro::adiconaMesa(MesaDeRestaurante mesa){
    mesas[qMesas++] = mesa;
}