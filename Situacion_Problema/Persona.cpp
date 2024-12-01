#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona()
{
    nombre = "";
    edad = 0;
    telefono = "";
}

Persona::Persona(string nombre, int edad, string telefono)
{
    this->nombre = nombre;
    this->edad = edad;
    this->telefono = telefono;
}

void Persona::mostrarInformacion()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Telefono: " << telefono << endl;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::getNombre()
{
    return nombre;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

int Persona::getEdad()
{
    return edad;
}

void Persona::setTelefono(string telefono)
{
    this->telefono = telefono;
}

string Persona::getTelefono()
{
    return telefono;
}

