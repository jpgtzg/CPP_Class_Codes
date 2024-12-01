#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto()
{
    nombre = "";
    precio = 0;
}

Producto::Producto(string nombre, double precio)
{
    this->nombre = nombre;
    this->precio = precio;
}

void Producto::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Producto::getNombre()
{
    return nombre;
}

void Producto::setPrecio(double precio)
{
    this->precio = precio;
}

double Producto::getPrecio()
{
    return precio;
}

void Producto::imprimeProducto()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: " << precio << endl;
}
