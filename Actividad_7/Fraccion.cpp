
#include "Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion()
{
    num = 1;
    den = 2;
}

Fraccion::Fraccion(int num, int den)
{
    this->num = num;
    this->den = den;
}

int Fraccion::getNum() const
{
    return num;
}

int Fraccion::getDen() const
{
    return den;
}

void Fraccion::setNum(int num)
{
    this->num = num;
}

void Fraccion::setDen(int den)
{
    this->den = den;
}

double Fraccion::calcValorReal()
{
    return (double)num / den;
}

Fraccion Fraccion::sumaFracciones(Fraccion f2)
{
    int num = this->num * f2.getDen() + f2.getNum() * this->den;
    int den = this->den * f2.getDen();

    // Simplificar la fracción
    for (int i = 2; i <= den && i <= num; i++)
    {
        while(den % i == 0 && num % i == 0)
        {
            den /= i;
            num /= i;
        }
    }

    return Fraccion(num, den);
}


void Fraccion::imprimeFraccion()
{
    cout << num << "/" << den << endl;
    cout << "Valor real: " << calcValorReal() << endl;
}

Fraccion::~Fraccion()
{
    //cout << "Destructor de Fraccion" << num << "/" << den << endl;
}