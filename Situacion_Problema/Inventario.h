#include <unordered_map>
#include "Producto.h"

using namespace std;

class Inventario
{
private:
    unordered_map<string, pair<int, double>> productos;

public:
    Inventario();
    Inventario(Producto productos[], int cantidad);
    void agregarProducto(Producto producto);
    Producto eliminarProducto(string nombre);
    void imprimirInventario();
};  