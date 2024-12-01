#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto
{
private:
    string nombre;
    double precio;

public:
    Producto();
    Producto(string nombre, double precio);
    void setNombre(string nombre);
    string getNombre();
    void setPrecio(double precio);
    double getPrecio();
    void imprimeProducto();
};
    
#endif
