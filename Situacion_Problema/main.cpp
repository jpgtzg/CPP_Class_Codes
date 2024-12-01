#include "Inventario.h"
#include "Producto.h"
#include "Cliente.h"
#include "Empleado.h"
#include <iostream>
#include "Pedido.h"
using namespace std;


int main()
{

    cout << "Bienvenido a la tienda de Maquillaje" << endl;
    cout << "-------------------------------------" << endl;

    Producto rimel("Rimel", 10);
    Producto mascara("Mascara", 20);
    Producto labial("Labial", 30);
    Producto sombra("Sombra", 40);
    Producto base("Base", 50);
    Producto delineador("Delineador", 60);

    Producto productos[] = {rimel, mascara, labial, sombra, base, delineador};
    Inventario inventario(productos, 6);

    while (true)
    {

        /*         cout << "Qué desea hacer?" << endl;
                cout << "1. Agregar producto" << endl;
                cout << "2. Eliminar producto" << endl;
                cout << "3. Imprimir inventario" << endl;
                cout << "4. Salir" << endl;
                int opcion;
                cin >> opcion;

                switch (opcion)
                {
                case 1:
                {
                    cout << "Ingrese el nombre del producto: ";
                    string nombre;
                    cin >> nombre;
                    cout << "Ingrese el precio del producto: ";
                    double precio;
                    cin >> precio;
                    inventario.agregarProducto(Producto(nombre, precio));
                    break;
                }
                case 2:
                {
                    cout << "Ingrese el nombre del producto a eliminar: ";
                    string nombre;
                    cin >> nombre;
                    inventario.eliminarProducto(nombre);
                    break;
                }
                case 3:
                    inventario.imprimirInventario();
                    break;
                case 4:
                    cout << "Gracias por usar la tienda de Maquillaje" << endl;
                    exit(0);
                default:
                    cout << "Opción inválida" << endl;
                    break;
                } */
    }

    return 0;
}

Cliente registrar_cliente()
{
    Cliente cliente;

    cout << "Bienvenido a la tienda de Maquillaje" << endl;
    cout << "-------------------------------------" << endl;

    cout << "Ingrese su nombre: ";
    string nombre;
    cin >> nombre;

    cout << "Ingrese su teléfono: ";
    string telefono;
    cin >> telefono;

    cout << "Ingrese su dirección: ";
    string direccion;
    cin >> direccion;

    cout << "Ingrese su email: ";
    string email;
    cin >> email;

    cout << "Ingrese su edad: ";
    int edad;
    cin >> edad;

    cliente.setNombre(nombre);
    cliente.setEdad(edad);
    cliente.setTelefono(telefono);
    cliente.setDireccion(direccion);
    cliente.setEmail(email);
    return cliente;
}

void menu_cliente(Inventario &inventario)
{
    Cliente cliente = registrar_cliente();
    Pedido pedido;

    cout << "1. Ver inventario" << endl;
    cout << "2. Generar pedido" << endl;
    cout << "3. Salir" << endl;
    int opcion;
    cin >> opcion;

    while (true)
    {
        switch (opcion)
        {
        case 1:
        {
            inventario.imprimirInventario();
            break;
        }
        case 2:
        {
            cout << "Ingrese el nombre del producto a agregar al pedido: ";
            string nombre;
            cin >> nombre;
            pedido.agregarProducto(inventario.eliminarProducto(nombre));
            break;
        }
        case 3:
        {
            cout << "Gracias por usar la tienda de Maquillaje" << endl;
            exit(0);
        }
        default:
        {
            cout << "Opción inválida" << endl;
            break;
        }
        }
    }
}