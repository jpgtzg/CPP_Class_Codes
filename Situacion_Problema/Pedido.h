#include "Cliente.h"
#include "Empleado.h"
#include "Producto.h"
#include <vector>
using namespace std;

class Pedido
{
private:
    int id;
    Cliente clienteAtendido;
    Empleado empleadoAtendio;
    int cantidadProductos;
    vector<Producto> productos;

public:
    Pedido();
    Pedido(int id, Cliente clienteAtendido, Empleado empleadoAtendio, Producto productos[]);
    void imprimePedido();
    void agregarProducto(Producto producto);
    void eliminarProducto(int indice);
    double calcularTotal();
};