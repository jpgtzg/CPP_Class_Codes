// Written by Juan Pablo Gutiérrez
// A01286376
class Fraccion{
    private: 
        int num;
        int den;
    public:
        Fraccion();
        Fraccion(int num, int den);
        int getNum() const;
        int getDen() const;
        void setNum(int num);
        void setDen(int den);
        double calcValorReal();
        Fraccion sumaFracciones(Fraccion f2);
        void imprimeFraccion();
        ~Fraccion();
};