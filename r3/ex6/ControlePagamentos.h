#ifndef CONTROLEPAGAMENTOS_H
#define CONTROLEPAGAMENTOS_H
#include <iostream>
#include "Pagamento.h"


class ControlePagamentos
{
    public:
        ControlePagamentos();
        virtual ~ControlePagamentos();
        void setPagamento(Pagamento p);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string n);
    protected:

    private:
        Pagamento pagamentos[50];
        int cont;
};

#endif // CONTROLEPAGAMENTOS_H
