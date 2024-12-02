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

Pedido::Pedido(int id, Cliente clienteAtendido, Empleado empleadoAtendio, const vector<Producto>& productos)
{
    this->id = id;
    this->clienteAtendido = clienteAtendido;
    this->empleadoAtendio = empleadoAtendio;
    this->productos = productos;
    this->cantidadProductos = productos.size();
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
        cout << endl;
    }

    cout << "Total: " << calcularTotal() << endl;
}

void Pedido::agregarProducto(Producto producto)
{
    productos.push_back(producto);
    cantidadProductos++;
}

Producto Pedido::eliminarProducto(string nombre)
{
    int i;
    for (i = 0; i < productos.size(); i++)
    {
        if (productos[i].getNombre() == nombre)
        {
            Producto producto = productos[i];
            productos.erase(productos.begin() + i);
            cantidadProductos--;
            return producto;
        }
    }
    if (i == productos.size())
    {
        cout << "Producto no encontrado" << endl;
        return Producto();
    }
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

vector<Producto> Pedido::getProductos()
{
    return productos;
}

void Pedido::setCliente(Cliente cliente)
{
    clienteAtendido = cliente;
}

void Pedido::setEmpleado(Empleado empleado)
{
    empleadoAtendio = empleado;
}