#include <string>
#include "Pedidos.h"
#ifndef MR_H
#define MR_H
class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        int qPedidos;
        Pedidos *pedidos;
        void adicionaPedido(Pedidos);
        void zeraPedidos();
        double calculaTotal();
};
#endif //MR_H