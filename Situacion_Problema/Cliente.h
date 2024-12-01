#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Persona.h"

class Cliente : public Persona
{
private:
    string direccion;
    string email;
    double saldo;

public:
    Cliente();
    Cliente(string nombre, int edad, string direccion, string telefono, string email, double saldo);
    void mostrarInformacion();
    void setDireccion(string direccion);
    string getDireccion();
    void setEmail(string email);
    string getEmail();
    void setSaldo(double saldo);
    double getSaldo();
};

#endif
