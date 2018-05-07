#include <string>
#include "Pedidos.h"
#include "MesaDeRestaurante.h"
#ifndef RC_H
#define RC_H
class RestauranteCaseiro{
    public:
        RestauranteCaseiro();
        int qMesas;
        MesaDeRestaurante *mesas;
        void adicionaAoPedido(int, Pedidos);
        void adiconaMesa(MesaDeRestaurante);
        double calculaTotal();
};
#endif //RC_H