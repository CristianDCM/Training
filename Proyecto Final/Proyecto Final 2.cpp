#include <iostream>
#include <locale.h> //Librería para usar tildes
using namespace std;
int main()
{
    setlocale(LC_ALL, "spanish"); // Uso de tildes
    string articuloDesc[20][2] = {{"Pantalon de mezclilla", "Pantalon de mezclilla para hombre con cintura elastica"},
                                  {"Zapatillas deportivas", "Zapatillas deportivas de cuero con suela de goma"},
                                  {"Camisa de algodon", "Camisa de algodon para hombre con cuello ajustable"},
                                  {"Gorra de beisbol", "Gorra de beisbol con visera flexible"},
                                  {"Blusa de seda", "Blusa de seda para mujer con escote en V"},
                                  {"Sudadera con capucha", "Sudadera con capucha para hombre con bolsillos laterales"},
                                  {"Falda de mezclilla", "Falda de mezclilla para mujer con cintura elastica"},
                                  {"Camiseta de lino", "Camiseta de lino para mujer con cuello redondo"},
                                  {"Botas de trabajo", "Botas de trabajo con suela de goma"},
                                  {"Jeans ajustados", "Jeans ajustados para hombre con cintura elastica"},
                                  {"Sandalias de cuero", "Sandalias de cuero para hombre con suela de goma"},
                                  {"Pantalones de vestir", "Pantalones de vestir para hombre con cintura elastica"},
                                  {"Cinturon de cuero", "Cinturon de cuero para hombre con hebilla metalica"},
                                  {"Blazer", "Blazer para mujer con botones y bolsillos laterales"},
                                  {"Chaleco de mezclilla", "Chaleco de mezclilla para hombre con bolsillos"},
                                  {"Bufanda", "Bufanda de lana para mujer con estampado"},
                                  {"Camiseta de algodon", "Camiseta de algodon para mujer con escote en V"},
                                  {"Zapatos de vestir", "Zapatos de vestir para hombre con suela de goma"},
                                  {"Guantes de cuero", "Guantes de cuero para hombre con forro de algodon"},
                                  {"Traje de baño", "Traje de baño para mujer con estampado floral"}}; // Articulos y descripción
    int precioArticulos[20] = {{120000},
                               {80000},
                               {60000},
                               {25000},
                               {90000},
                               {50000},
                               {70000},
                               {40000},
                               {90000},
                               {100000},
                               {60000},
                               {80000},
                               {30000},
                               {120000},
                               {50000},
                               {35000},
                               {45000},
                               {100000},
                               {25000},
                               {70000}}; // Precio
    int opcCiudad, opcTienda, cantCompra, volverMenu, opcCompra, opcStock, tiendaN;
    string ciudadActual, tiendaActual;
    int stockTiendaActual[6][20] = {                                                                        // Arreglo que contiene el stock de cada tienda
                                    {5, 2, 1, 5, 11, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7},     // Bogota - Tienda 1
                                    {3, 9, 5, 15, 12, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7},    // Tienda 2
                                    {8, 8, 2, 14, 13, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7},    // Medellin - Tienda 1
                                    {8, 6, 6, 15, 5, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7},     // Tienda 2
                                    {10, 4, 7, 12, 1, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7},    // Cali - Tienda 1
                                    {14, 30, 8, 11, 13, 8, 7, 9, 6, 10, 12, 9, 10, 8, 5, 12, 8, 6, 10, 7}}; // Tienda 2
    int carritocompra[20] = {0};                                                                            // Arreglo para contener los artículos comprados
    string nombreCliente, direccionCliente;                                                                 // Datos del cliente
    int creditosActuales = 3000000;                                                                         // Créditos iniciales
    long telefonoCliente;                                                                                   // Long para que el usuario pueda ingresar un número de teléfono de 10 dígitos
    cout << "Digite su nombre: ";                                                                           // Imprimir
    cin >> nombreCliente;                                                                                   // Digita el nombre y lo guarda en la variable nombreCliente
    cout << "Digite su dirección: ";                                                                        // Imprimir
    cin >> direccionCliente;                                                                                // Digita la dirección y lo guarda en la variable direccionCliente
    cout << "Digite su teléfono: ";                                                                         // Imprimir
    cin >> telefonoCliente;                                                                                 // Digita el teléfono y lo guarda en la variable telefonoCliente
    do
    {
        cout << "1.Bogota\n2.Medellin\n3.Cali\nDigite el numero de la ciudad: "; // Imprimir
        cin >> opcCiudad;                                                        // Digitar la ciudad y guardarla en la variable opcCiudad
        switch (opcCiudad)
        {
        case 1:                                                                // En caso de que se digite 1
            ciudadActual = "Bogota";                                           // Se asigna la ciudad actual en una variable
            cout << "1.Tienda 1\n2.Tienda 2\nDigite el numero de la tienda: "; // Imprimir
            cin >> opcTienda;                                                  // Digitar la tienda y guardarla en la variable opcTienda
            if (opcTienda == 1)                                                // Si la opcion digitada es igual a 1
            {
                tiendaN = 1;
                tiendaActual = "Tienda 1"; // Se asigna "Tienda 1" a la variable tiendaActual
            }
            else if (opcTienda == 2) // Si la opcion digitada es igual a 2
            {
                tiendaN = 2;
                tiendaActual = "Tienda 2"; // Se asigna "Tienda 2" a la variable tiendaActual
            }
            break;                                                             // Se rompe el ciclo switch
        case 2:                                                                // En caso de que se digite 2
            ciudadActual = "Medellin";                                         // Se asigna "Medellin" a la variable ciudadActual
            cout << "1.Tienda 1\n2.Tienda 2\nDigite el numero de la tienda: "; // Imprimir
            cin >> opcTienda;                                                  // Digitar la tienda y guardarla en la variable opcTienda
            if (opcTienda == 1)                                                // Si la opcion digitada es igual es a 1
            {
                tiendaN = 3;
                tiendaActual = "Tienda 1"; // Se asigna "Tienda 1" a la variable tiendaActual
            }
            else if (opcTienda == 2) // Si la opcion digitada es igual a 2
            {
                tiendaN = 4;
                tiendaActual = "Tienda 2"; // Se asigna "Tienda 2" a la variable tiendaActual
            }
            break;                                                             // Se rompe el ciclo switch
        case 3:                                                                // En caso de que se digite 3
            ciudadActual = "Cali";                                             // Se asigna "Cali" a la variable ciudadActual
            cout << "1.Tienda 1\n2.Tienda 2\nDigite el numero de la tienda: "; // Imprimir
            cin >> opcTienda;                                                  // Digitar la tienda y guardarla en la variable opcTienda
            if (opcTienda == 1)                                                // Si la opcion digita es igual a 1
            {
                tiendaN = 5;
                tiendaActual = "Tienda 1"; // Se asigna "Tienda 1" a la variable tiendaActual
            }
            else if (opcTienda == 2) // Si al opcion digita es igual a 2
            {
                tiendaN = 6;
                tiendaActual = "Tienda 2"; // Se asigna "Tienda 2" a la variable tiendaActual
            }
            break;                                      // Se rompe el ciclo switch
        default:                                        // En caso de que no se cumpla ninguna de las condiciones anteriores
            cout << "Digite una opcion valida" << endl; // Imprimir
            break;                                      // Se rompe el ciclo switch
        }
        cout << "-------------------------------------------------------" << endl;                              // Imprimir
        cout << "Articulos disponibles en la tienda " << ciudadActual << " - " << tiendaActual << " :" << endl; // Imprimir
        cout << "-------------------------------------------------------" << endl;
        cout << "Articulo      -      Precio      -      Stock" << endl; // Imprimir
        for (int i = 0; i < 20; i++)                                     // Itineracion de 0 a 19
        {
            // Se imprimie el nombre del articulo, el precio y el stock dependiendo de la ciudad y la tienda seleccionada
            cout << i + 1 << ". " << articuloDesc[i][0] << " - $" << precioArticulos[i] << " - " << stockTiendaActual[tiendaN - 1][i] << endl;
        }
        cout << "-------------------------------------------------------" << endl; // Imprimir
        cout << "Digite 0 para terminar la compra" << endl;                        // Imprimir
        do                                                                         // Punto inicial de un bucle do-while
        {
            cout << "Digite el numero del articulo que desea comprar: "; // Imprimir
            cin >> opcCompra;                                            // Digitar la opcion de compra y guardarla en la variable opcCompra
            if (opcCompra == 0)                                          // Si la opcion digitada es igual a 0
            {
                break; // Se rompe el ciclo do-while
            }
            else if (opcCompra > 0 && opcCompra < 21) // Si la opcion digitada es mayor a 0 y menor a 21
            {
                cout << "Digite la cantidad que desea comprar: "; // Imprimir
                cin >> cantCompra;                                // Digitar la cantidad de compra y guardarla en la variable cantCompra
                if (cantCompra <= stockTiendaActual[tiendaN - 1][opcCompra - 1])
                {
                    if (cantCompra * precioArticulos[opcCompra - 1] <= creditosActuales) // Si la cantidad de compra por el precio del stock es menor o igual a los creditos actuales
                    {
                        stockTiendaActual[tiendaN - 1][opcCompra - 1] -= cantCompra;     // Se resta la cantidad de compra al stock de la tienda actual
                        carritocompra[opcCompra - 1] += cantCompra;                      // Se suma la cantidad de compra al carrito de compra para que se guarde en el historial de los articulos comprados
                        creditosActuales -= precioArticulos[opcCompra - 1] * cantCompra; // Se resta el precio del articulo por la cantidad de compra a los creditos actuales para saber cuanto dinero le queda al usuario
                    }
                    else // Si no se cumple la condicion anterior
                    {
                        cout << "No tiene suficientes creditos para comprar este articulo" << endl;
                    }
                }
                else // Si no se cumple la condicion anterior
                {
                    cout << "No hay suficiente stocks en la tienda" << endl; // Imprimir
                }
            }
            else // Si no se cumple ninguna de las condiciones anteriores
            {
                cout << "Digite una opcion valida, no superior a 20" << endl; // Imprimir
            }
        } while (opcCompra != 0 || cantCompra != 0 || cantCompra != 0);                                                             // Repetir el bucle mientras la opcion de compra sea diferente de 0 o la cantidad de compra sea diferente de 0 o la cantidad de compra sea diferente de 0
        cout << "-------------------------------------------------------" << endl;                                                  // Imprimir
        cout << ciudadActual << " - " << tiendaActual << endl;                                                                      // Imprimir
        cout << "Nombre Cliente: " << nombreCliente << endl;                                                                        // Imprimir
        cout << "Direccion: " << direccionCliente << endl;                                                                          // Imprimir
        cout << "Telefono: " << telefonoCliente << endl;                                                                            // Imprimir
        cout << "--------------------------------------------------------------------------------------------------------" << endl; // Imprimir
        cout << "Articulos comprados:" << endl;                                                                                     // Imprimir
        cout << "--------------------------------------------------------------------------------------------------------" << endl; // Imprimir
        cout << "Articulo      -      Descripcion      -      Cantidad      -      Valor total" << endl;                            // Imprimir
        for (int i = 0; i < 20; i++)                                                                                                // Itineracion de 0 a 19
        {
            if (carritocompra[i] != 0) // Si el articulo del carrito de compra es diferente de 0
            {
                cout << articuloDesc[i][0] << " - " << articuloDesc[i][1] << " - " << carritocompra[i] << " - $" << precioArticulos[i] * carritocompra[i] << endl; // Imprimir el articulo, la descripcion, la cantidad y el valor total
            }
        }
        cout << "--------------------------------------------------------------------------------------------------------" << endl; // Imprimir
        for (int i = 0; i < 20; i++)                                                                                                // Iteneracion de 0 a 19
        {
            carritocompra[i] = 0; // Se reinicia el carrito de compra
        }
        cout << "Creditos restantes: $" << creditosActuales << endl; // Imprimir los creditos actuales

        cout << "Desea ver el stock actual de la tienda? (1.Si/2.No): "; // Imprimir
        cin >> opcStock;                                                 // Digitar la opcion de stock y guardarla en la variable opcStock
        if (opcStock == 1)                                               // Si la opcion de stock es igual a 1
        {
            cout << "-------------------------------------------------------" << endl;             // Imprimir
            cout << "Stock actual de la tienda " << ciudadActual << " - " << tiendaActual << endl; // Imprimir
            cout << "-------------------------------------------------------" << endl;             // Imprimir
            cout << "Articulo      -       Stock" << endl;                                         // Imprimir
            for (int i = 0; i < 20; i++)                                                           // Itineracion de 0 a 19
            {
                cout << i + 1 << "." << articuloDesc[i][0] << " - " << stockTiendaActual[tiendaN - 1][i] << endl; // Imprimir el articulo y el stock de la tienda actual
            }
            cout << "-------------------------------------------------------" << endl; // Imprimir
        }
        cout << "Desea volver al menu principal? (1.Si/2.No)" << endl; // Imprimir
        cin >> volverMenu;                                             // Digite y guarde en la variable volverMenu
        if (volverMenu == 1)                                           // Si la opcion es igual a 1
        {
            system("cls"); // Limpiar la consola, Es opcional para pruebas de stock lo aconsable es comentarlo
        }
    } while (volverMenu == 1); // Repetir el bucle mientras la opcion sea igual a 1
}