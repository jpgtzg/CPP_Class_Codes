// Written by Juan Pablo Gutiérrez
// A01286376

#include "actividad.h"
#include <iostream>

using namespace std;

Alumno::Alumno()
{
    matricula = "";
    nombre = "";
    edad = 0;
    carrera = "";
}

Alumno::Alumno(string matricula, string nombre, int edad, string carrera)
{
    this->matricula = matricula;
    this->nombre = nombre;
    this->edad = edad;
    this->carrera = carrera;
}

void Alumno::setMatricula(string matricula)
{
    this->matricula = matricula;
}

string Alumno::getMatricula()
{
    return matricula;
}

void Alumno::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Alumno::getNombre()
{
    return nombre;
}

void Alumno::setEdad(int edad)
{
    this->edad = edad;
}

int Alumno::getEdad()
{
    return edad;
}

void Alumno::setCarrera(string carrera)
{
    this->carrera = carrera;
}

string Alumno::getCarrera()
{
    return carrera;
}

void Alumno::imprimeAlumno()
{
    cout << "Matricula: " << matricula << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
}

void Alumno::cumpleaños()
{
    edad++;
}

void testConstructores()
{
    // Prueba del constructor default
    Alumno a1;
    if (a1.getMatricula() != "" || a1.getNombre() != "" || 
        a1.getEdad() != 0 || a1.getCarrera() != "") {
        cout << "Error en constructor default" << endl;
        return;
    }

    // Prueba del constructor con parámetros
    Alumno a2("A01234567", "Juan Pérez", 20, "ITC");
    if (a2.getMatricula() != "A01234567" || a2.getNombre() != "Juan Pérez" || 
        a2.getEdad() != 20 || a2.getCarrera() != "ITC") {
        cout << "Error en constructor con parámetros" << endl;
        return;
    }
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
}

void testCumpleaños()
{
    Alumno alumno("A01234567", "Juan Pérez", 20, "ITC");
    alumno.cumpleaños();
    if (alumno.getEdad() != 21) {
        cout << "Error en cumpleaños" << endl;
        return;
    }
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