#include <unordered_map>
#include "Producto.h"

using namespace std;

class Inventario
{
private:
    unordered_map<string, int> productos;

public:
    Inventario();
    Inventario(Producto productos[], int cantidad);
    void agregarProducto(Producto producto);
    void eliminarProducto(string nombre);
    void imprimirInventario();
};  