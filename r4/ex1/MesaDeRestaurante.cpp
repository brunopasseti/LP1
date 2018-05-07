#include "MesaDeRestaurante.h"
#include "Pedidos.h"

MesaDeRestaurante::MesaDeRestaurante(){
    pedidos = new Pedidos[32];
    qPedidos = 0;
};

void MesaDeRestaurante::adicionaPedido(Pedidos novoPedido){
    pedidos[qPedidos++] = novoPedido;
}
void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < qPedidos; i++){
        this->pedidos[i].quant = 0;
    }
}
double MesaDeRestaurante::calculaTotal(){
    double total = 0;
        for(int i = 0; i < qPedidos; i++){
        double q = this->pedidos[i].quant;
        double p = this->pedidos[i].price;
        total += (p*q);
    }
    return total;
}