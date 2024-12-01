#include "Empleado.h"
#include <iostream>

using namespace std;

Empleado::Empleado() : Persona()
{
    departamento = "";
}

Empleado::Empleado(string nombre, int edad, string telefono, string departamento) : Persona(nombre, edad, telefono)
{
    this->departamento = departamento;
}

void Empleado::mostrarInformacion()
{
    Persona::mostrarInformacion();
    cout << "Departamento: " << getDepartamento() << endl;
}

void Empleado::setDepartamento(string departamento)
{
    this->departamento = departamento;
}

string Empleado::getDepartamento()
{
    return departamento;
}