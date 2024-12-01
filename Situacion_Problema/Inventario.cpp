#include "Inventario.h"
#include "Producto.h"
#include <iostream>
using namespace std;

Inventario::Inventario()
{
    productos = unordered_map<string, pair<int, double>>();
}

Inventario::Inventario(Producto productos[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        this->productos[productos[i].getNombre()] = make_pair(1, productos[i].getPrecio());
    }
}

void Inventario::agregarProducto(Producto producto)
{
    if (productos.find(producto.getNombre()) == productos.end()) {
        // If product doesn't exist, add it with quantity 1
        productos[producto.getNombre()] = make_pair(1, producto.getPrecio());
    } else {
        // If product exists, increment quantity and maintain the same price
        productos[producto.getNombre()].first += 1;
    }
}

Producto Inventario::eliminarProducto(string nombre)
{
    Producto producto;
    
    // Check if product exists in inventory
    if (productos.find(nombre) != productos.end()) {
        double precio = productos[nombre].second;
        producto = Producto(nombre, precio);
        
        // Decrease quantity by 1
        productos[nombre].first--;
        
        // If quantity reaches 0, remove the product entirely
        if (productos[nombre].first <= 0) {
            productos.erase(nombre);
        }
    }
    
    return producto;
}

void Inventario::imprimirInventario()
{
    for (const auto& pair : productos)
    {
        cout << "Producto: " << pair.first 
             << ", Cantidad: " << pair.second.first 
             << ", Precio: $" << pair.second.second << endl;
    }
}