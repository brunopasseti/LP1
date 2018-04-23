#include <iostream>
#include <string>
#include "data.h"

int main(int argc,char* argv[]){
    Data *validade = new Data(9,30,2005);
    Data *validade2 = new Data(13,12,2020);
    validade->setAno(2016);
    validade->setMes(2);
    validade->setDia(2);
    validade->avancarDia();
    std::cout << validade->getDia() << '/' << validade->getMes() << '/' << validade->getAno() << "\n";
    delete validade;
    delete validade2;
    return 0;
}