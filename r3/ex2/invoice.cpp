#include "invoice.h"
#include <iostream>
#include <string>


Invoice::Invoice(int ID, std::string desc, float quant, float price){
			this->ID = ID;
			this->desc = desc;
			this->quant = quant;
			this->price = price;
}

int Invoice::getID(){
	return ID;
}
std::string Invoice::getDesc(){
	return desc;
}
float Invoice::getQuant(){
	return quant;
}
float Invoice::getPrice(){
	return price;
}
void Invoice::setID(int ID){
	this->ID = ID;
}
void Invoice::setDesc(std::string desc){
	this->desc = desc;
}
void Invoice::setQuant(float quant){
	this->quant = quant;
}
void Invoice::setPrice(float price){
	this->price = price;
}
float Invoice::getInvoiceAmount(){
	return quant*price > 0 ? quant*price : 0;
}
