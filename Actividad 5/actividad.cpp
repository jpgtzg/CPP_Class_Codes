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
