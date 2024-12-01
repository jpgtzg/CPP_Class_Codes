#include <string>
#include "Producto.h"
#include <vector>

using namespace std;

class Proveedor
{
private:
    string nombre;
    string telefono;
    vector<Producto> productos;

public:
    Proveedor();
    Proveedor(string nombre, string telefono, Producto productos[]);
    void imprimeProveedor();
    void agregarProducto(Producto producto);
    void eliminarProducto(int indice);
    string getNombre();
    string getTelefono();
    vector<Producto> getProductos();
    void setNombre(string nombre);
    void setTelefono(string telefono);
    void setProductos(vector<Producto> productos);
};