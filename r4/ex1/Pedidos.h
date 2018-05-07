#include <string>
#ifndef P_H
#define P_H
class Pedidos{
    public:
        int numero;
        std::string desc;
        int quant;
        double price;
        Pedidos();
        Pedidos(int,std::string,int,double);
};
#endif //P_H