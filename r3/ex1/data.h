#ifndef data_h
#define data_h

class Data{
    private:
        int ano,dia,mes;
    public:
        Data();
        Data(int dia, int mes, int ano);
        void setDia(int dia);
        void setAno(int ano);
        void setMes(int mes);
        int getDia();
        int getAno();
        int getMes();
        void avancarDia();
};

#endif