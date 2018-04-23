#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>


class Pagamento
{
    public:
        Pagamento();
        virtual ~Pagamento();
        void setValor(double v);
        void setNome(std::string n);
        double getValor();
        std::string getNome();
    private:
        double valorPagamento;
        std::string nomeFuncionario;
};

#endif // PAGAMENTO_H
