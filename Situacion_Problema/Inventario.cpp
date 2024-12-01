#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario()
{
    productos = unordered_map<string, int>();
}

Inventario::Inventario(Producto productos[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        this->productos[productos[i].getNombre()] = 1;
    }
}

void Inventario::agregarProducto(Producto producto)
{
    productos[producto.getNombre()] += 1;
}

void Inventario::eliminarProducto(string nombre)
{
    productos.erase(nombre);
}

void Inventario::imprimirInventario()
{
    for (pair<string, int> pair : productos)
    {
        cout << "Producto: " << pair.first << ", Cantidad: " << pair.second << endl;
    }
}