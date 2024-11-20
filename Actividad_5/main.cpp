#include <iostream>
#include "alumno.h"

using namespace std;

void testConstructores()
{
    // Prueba del constructor default
    Alumno a1;
    if (a1.getMatricula() != "" || a1.getNombre() != "" || 
        a1.getEdad() != 0 || a1.getCarrera() != "") {
        cout << "Error en constructor default" << endl;
        return;
    }
    a1.imprimeAlumno();

    // Prueba del constructor con parámetros
    Alumno a2("A01234567", "Juan Pérez", 20, "ITC");
    if (a2.getMatricula() != "A01234567" || a2.getNombre() != "Juan Pérez" || 
        a2.getEdad() != 20 || a2.getCarrera() != "ITC") {
        cout << "Error en constructor con parámetros" << endl;
        return;
    }
    a2.imprimeAlumno();
}

void testSettersGetters()
{
    Alumno alumno;

    // Prueba setters
    alumno.setMatricula("A02345678");
    alumno.setNombre("María García");
    alumno.setEdad(19);
    alumno.setCarrera("ISD");

    // Prueba getters
    if (alumno.getMatricula() != "A02345678" || alumno.getNombre() != "María García" ||
        alumno.getEdad() != 19 || alumno.getCarrera() != "ISD") {
        cout << "Error en setters/getters" << endl;
        return;
    }
    alumno.imprimeAlumno();
}

void testCumpleaños()
{
    Alumno alumno("A01234567", "Juan Pérez", 20, "ITC");
    alumno.imprimeAlumno();
    alumno.cumpleaños();
    if (alumno.getEdad() != 21) {
        cout << "Error en cumpleaños" << endl;
        return;
    }
    alumno.imprimeAlumno();
}

int main()
{
    cout << "Iniciando pruebas..." << endl;

    testConstructores();
    testSettersGetters();
    testCumpleaños();

    cout << "Todas las pruebas pasaron exitosamente!" << endl;
    return 0;
}