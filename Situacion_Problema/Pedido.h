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
    Pedido(int id, Cliente clienteAtendido, Empleado empleadoAtendio, const vector<Producto>& productos);
    void imprimePedido();
    void agregarProducto(Producto producto);
    Producto eliminarProducto(string nombre);
    double calcularTotal();
    vector<Producto> getProductos();
    void setCliente(Cliente cliente);
    void setEmpleado(Empleado empleado);
};
