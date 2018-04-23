#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>

class Invoice{
	private:
		int ID;
		std::string desc;
		float quant;
		float price;
	public:
		Invoice(int ID, std::string desc, float quant, float price);
		int getID();
		std::string getDesc();
		float getQuant();
		float getPrice();
		void setID(int ID);
		void setDesc(std::string desc);
		void setQuant(float quant);
		void setPrice(float price);
		float getInvoiceAmount();

};
#endif