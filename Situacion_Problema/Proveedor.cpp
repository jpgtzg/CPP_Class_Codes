
#include "Proveedor.h"
#include <iostream>
using namespace std;

Proveedor::Proveedor()
{
    nombre = "";
    telefono = "";
    productos = vector<Producto>();
}

Proveedor::Proveedor(string nombre, string telefono, Producto productos[])
{
    this->nombre = nombre;
    this->telefono = telefono;
    for (int i = 0; i < sizeof(productos) / sizeof(productos[0]); i++)
    {
        this->productos.push_back(productos[i]);
    }
}

void Proveedor::imprimeProveedor()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Productos: " << endl;
}

void Proveedor::agregarProducto(Producto producto)
{
    productos.push_back(producto);
}

void Proveedor::eliminarProducto(int indice)
{
    productos.erase(productos.begin() + indice);
}

string Proveedor::getNombre()
{
    return nombre;
}

string Proveedor::getTelefono()
{
    return telefono;
}

vector<Producto> Proveedor::getProductos()
{
    return productos;
}

void Proveedor::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Proveedor::setTelefono(string telefono)
{
    this->telefono = telefono;
}

void Proveedor::setProductos(vector<Producto> productos)
{
    this->productos = productos;
}
