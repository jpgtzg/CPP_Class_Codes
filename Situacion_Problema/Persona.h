#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    string telefono;

public:
    Persona();
    Persona(string nombre, int edad, string telefono);
    void mostrarInformacion();
    void setNombre(string nombre);
    string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setTelefono(string telefono);
    string getTelefono();
};

#endif
