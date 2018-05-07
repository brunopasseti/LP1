#include "Pedidos.h"


Pedidos::Pedidos(){
    numero = 0;
    desc = "";
    quant = 0;
    price = 0.0;
}
Pedidos::Pedidos(int numero,std::string desc,int quant,double price){
    this->numero = numero;
    this->desc = desc;
    this->quant = quant;
    this->price = price;
}