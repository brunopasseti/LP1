#include <iostream>
#include <string>
#include "invoice.h"

int main(int argc, char const *argv[]){
	Invoice *batata = new Invoice(1,"Uma batata muito gostosa",10,2.5);
	batata->setQuant(30);
	std::cout << "receita:" << batata->getInvoiceAmount() << std::endl;
	batata->setID(15);
	batata->setPrice(200);
	std::cout << "ID: "<< batata->getID() << " Desc: "<< batata->getDesc() << " Quant: "<< batata->getQuant() << " Price: "<< batata->getPrice() << std::endl;
	delete batata;
	return 0;
}