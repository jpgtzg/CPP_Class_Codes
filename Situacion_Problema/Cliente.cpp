#include "Cliente.h"
#include <iostream>

using namespace std;

Cliente::Cliente() : Persona()
{
    direccion = "";
    email = "";
}

Cliente::Cliente(string nombre, int edad, string direccion, string telefono, string email, double saldo) : Persona(nombre, edad, telefono)
{
    this->direccion = direccion;
    this->email = email;
    this->saldo = saldo;
}

void Cliente::mostrarInformacion()
{
    Persona::mostrarInformacion();
    cout << "Direccion: " << getDireccion() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Saldo: " << getSaldo() << endl;
}

void Cliente::setDireccion(string direccion)
{
    this->direccion = direccion;
}

string Cliente::getDireccion()
{
    return direccion;
}

void Cliente::setEmail(string email)
{
    this->email = email;
}

string Cliente::getEmail()
{
    return email;
}

void Cliente::setSaldo(double saldo)
{
    this->saldo = saldo;
}

double Cliente::getSaldo()
{
    return saldo;
}