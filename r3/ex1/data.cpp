#include "data.h"

Data::Data(){
    ano = 1999;
    dia = 19;
    mes = 04;
}

Data::Data(int dia,int mes, int ano){
    if(dia > 31 || mes > 12){
        this->dia = 19;
        this->mes = 04;
        this->ano = 1999;
    }else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
        this->dia = 19;
        this->mes = 04;
        this->ano = 1999;
    }else if(mes == 2 && dia > 28 && (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0))){
        this->dia = 19;
        this->mes = 04;
        this->ano = 1999;
    }else {
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }
    
}

void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::avancarDia(){
    if(mes == 2 && (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) && dia == 28){
        mes++;
        dia = 1;
    }else if(mes == 2 && !(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) && dia == 27){
        mes++;
        dia = 1;
    }else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30){
        dia = 1;
        mes++;
    }else if(dia == 31 && mes == 12){
        dia = 1;
        mes = 1;
        ano++;
    }else if(dia == 31){
        mes++;
        dia = 1;
    }else dia++;
}