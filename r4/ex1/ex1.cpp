#include <string>
#include <iostream>
#include "Pedidos.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"



int main(int argc, char **argv){
    Pedidos *p1 = new Pedidos(1,"Feijão",1,3.5);
    Pedidos *p2 = new Pedidos(2,"Arroz",1, 2.5);
    Pedidos *p3 = new Pedidos(3,"Bife",1, 4.5);
    Pedidos *p4 = new Pedidos(4,"Batata-frita",2, 3);
    Pedidos *p5 = new Pedidos(5,"Ovo frito",1, 1);
    MesaDeRestaurante *m1 = new MesaDeRestaurante();
    RestauranteCaseiro *r1 = new RestauranteCaseiro();
    m1->adicionaPedido(*p1);
    m1->adicionaPedido(*p2);
    m1->adicionaPedido(*p3);
    m1->adicionaPedido(*p4);
    r1->adiconaMesa(*m1);
    r1->adicionaAoPedido(0, *p5);

    for(int i = 0; i < r1->qMesas; i++){>
        std::cout << "Mesa " << i  << ":" << '\n';
        std::cout << "-#-#-#-#-#-#-#-#-#-#-#-#-#-#" << '\n';
        for(int j = 0; j < r1->mesas[i].qPedidos; j++){
            std::cout << "Pedido" << j+1 << ':' <<'\n';
            std::cout << "----------------------------" << '\n';
            std::cout << "Numero: " << r1->mesas[i].pedidos[j].numero <<'\n';
            std::cout << "Desc: " << r1->mesas[i].pedidos[j].desc <<'\n';
            std::cout << "Quant: " << r1->mesas[i].pedidos[j].quant <<'\n';
            std::cout << "Preço: " <<r1->mesas[i].pedidos[j].price <<'\n';
            std::cout << "\n\n\n";
        }
    }

    std::cout << "Total Casa: " << r1->calculaTotal() <<  '\n';

    return 0;
}