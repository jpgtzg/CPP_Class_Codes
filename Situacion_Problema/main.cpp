#include "Inventario.h"
#include "Producto.h"
#include "Cliente.h"
#include "Empleado.h"
#include <iostream>
#include "Pedido.h"
using namespace std;

void menu_cliente(Inventario &inventario);
Cliente registrar_cliente();

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

    menu_cliente(inventario);

    return 0;
}

Cliente registrar_cliente()
{
    Cliente cliente;

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

    cout << "Ingrese su saldo: ";
    double saldo;
    cin >> saldo;

    cliente.setNombre(nombre);
    cliente.setEdad(edad);
    cliente.setTelefono(telefono);
    cliente.setDireccion(direccion);
    cliente.setEmail(email);
    cliente.setSaldo(saldo);
    return cliente;
}

void menu_cliente(Inventario &inventario)
{
    Cliente cliente = registrar_cliente();
    Empleado empleado("Juan", 20, "1234567890", "Ventas");
    Pedido pedido;
    pedido.setCliente(cliente);
    pedido.setEmpleado(empleado);

    cout << "\033[2J\033[1;1H";
    while (true)
    {
        cout << endl;
        cout << "-------------------------------------" << endl;
        cout << endl;

        cout << "1. Ver inventario" << endl;
        cout << "2. Agregar producto al pedido" << endl;
        cout << "3. Eliminar producto del pedido" << endl;
        cout << "4. Ver pedido" << endl;
        cout << "5. Pagar pedido" << endl;
        cout << "6. Salir" << endl;
        int opcion;
        cin >> opcion;
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
            Producto producto = inventario.eliminarProducto(nombre);
            if (producto.getNombre() != "")
            {
                pedido.agregarProducto(producto);
                cout << "Producto agregado al pedido" << endl;
            }
            else
            {
                cout << "Producto no disponible" << endl;
            }
            break;
        }
        case 3:
        {
            cout << "Ingrese el nombre del producto a eliminar del pedido: ";
            string nombre;
            cin >> nombre;
            Producto producto = pedido.eliminarProducto(nombre);
            if (producto.getNombre() != "")
            {
                inventario.agregarProducto(producto);
                cout << "Producto eliminado del pedido" << endl;
            }
            else
            {
                cout << "Producto no encontrado en el pedido" << endl;
            }
            break;
        }
        case 4:
        {
            if (pedido.getProductos().size() == 0)
            {
                cout << "No hay productos en el pedido" << endl;
            }
            else
            {
                pedido.imprimePedido();
            }
            break;
        }
        case 5:
        {
            double total = pedido.calcularTotal();
            cout << "El total del pedido es: " << total << endl;
            if (cliente.getSaldo() >= total)
            {
                cliente.setSaldo(cliente.getSaldo() - total);
                cout << "El saldo del cliente es: " << cliente.getSaldo() << endl;
                cout << "Pedido realizado con éxito" << endl;
                pedido = Pedido();
                pedido.setCliente(cliente);
                pedido.setEmpleado(empleado);
            }
            else
            {
                cout << "El saldo del cliente es insuficiente" << endl;
            }
            break;
        }
        case 6:
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
