
#include "Pedido.h"
#include <iostream>
using namespace std;

Pedido::Pedido()
{
    id = 0;
    cantidadProductos = 0;
    productos = vector<Producto>();
    clienteAtendido = Cliente();
    empleadoAtendio = Empleado();
}

Pedido::Pedido(int id, Cliente clienteAtendido, Empleado empleadoAtendio, Producto productos[])
{
    this->id = id;
    this->clienteAtendido = clienteAtendido;
    this->empleadoAtendio = empleadoAtendio;
    this->cantidadProductos = sizeof(productos) / sizeof(productos[0]);

    for (int i = 0; i < this->cantidadProductos; i++)
    {
        this->productos.push_back(productos[i]);
    }
}

void Pedido::imprimePedido()
{
    cout << "ID: " << id << endl;
    cout << "Cliente: " << clienteAtendido.getNombre() << endl;
    cout << "Empleado: " << empleadoAtendio.getNombre() << endl;
    cout << "Productos: " << endl;
    for (int i = 0; i < productos.size(); i++)
    {
        productos[i].imprimeProducto();
    }
}

void Pedido::agregarProducto(Producto producto)
{
    productos.push_back(producto);
    cantidadProductos++;
}

void Pedido::eliminarProducto(int indice)
{
    productos.erase(productos.begin() + indice);
    cantidadProductos--;
}

double Pedido::calcularTotal()
{
    double total = 0;
    for (int i = 0; i < productos.size(); i++)
    {
        total += productos[i].getPrecio();
    }
    return total;
}