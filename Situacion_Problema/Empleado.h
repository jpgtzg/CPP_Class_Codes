#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona
{
private:
    string departamento;

public:
    Empleado();
    Empleado(string nombre, int edad, string telefono, string departamento);
    void setDepartamento(string departamento);
    string getDepartamento();
    void mostrarInformacion();
};
#endif