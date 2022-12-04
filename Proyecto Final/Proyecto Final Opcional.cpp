#include <iostream>
#include <locale.h> //Libreria caracter especial usar tildes
using namespace std;
int main()
{
    setlocale(LC_ALL, "spanish"); // Caracter especial usar tildes
    string nomFarm[20][4] = {{"Paracetamol", "Sanofi", "Tabletas 500mg", "Alivio del dolor y la fiebre"},
                             {"Advil", "Pfizer", "Cápsulas 200mg", "Alivio del dolor y la inflamación"},
                             {"Apiretal", "GlaxoSmithKline", "Tabletas 400mg", "Alivio del dolor y la fiebre"},
                             {"Ibuprofeno", "Bayer", "Tabletas 600mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Tylenol", "Johnson & Johnson", "Cápsulas 500mg", "Alivio del dolor y la fiebre"},
                             {"Naproxeno", "Bayer", "Tabletas 250mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Aspirina", "Bayer", "Tabletas 300mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Motrin", "McNeil", "Tabletas 400mg", "Alivio del dolor y la inflamación"},
                             {"Dolobid", "Merck", "Tabletas 500mg", "Alivio del dolor y la inflamación"},
                             {"Tylenol", "Johnson & Johnson", "Tabletas 650mg", "Alivio del dolor y la fiebre"},
                             {"Aleve", "Bayer", "Cápsulas 200mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Motrin", "McNeil", "Tabletas 600mg", "Alivio del dolor y la inflamación"},
                             {"Paracetamol", "Sanofi", "Cápsulas 500mg", "Alivio del dolor y la fiebre"},
                             {"Dolobid", "Merck", "Cápsulas 300mg", "Alivio del dolor y la inflamación"},
                             {"Advil", "Pfizer", "Tabletas 200mg", "Alivio del dolor y la inflamación"},
                             {"Apiretal", "GlaxoSmithKline", "Cápsulas 400mg", "Alivio del dolor y la fiebre"},
                             {"Ibuprofeno", "Bayer", "Cápsulas 600mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Tylenol", "Johnson & Johnson", "Tabletas 500mg", "Alivio del dolor y la fiebre"},
                             {"Naproxeno", "Bayer", "Cápsulas 250mg", "Alivio del dolor, la fiebre y la inflamación"},
                             {"Aspirina", "Bayer", "Cápsulas 300mg", "Alivio del dolor, la fiebre y la inflamación"}}; // Medicamentos, Laboratorios, Presentaciones y Descripción
    int cantFarm[6][20] = {{11, 22, 12, 15, 20, 14, 13, 18, 21, 10, 17, 18, 16, 19, 22, 12, 15, 20, 14, 13},           // Bogota Norte
                           {9, 20, 10, 13, 18, 12, 11, 16, 19, 8, 15, 16, 14, 17, 20, 10, 13, 18, 12, 11},             // Sur
                           {7, 18, 8, 11, 16, 10, 9, 14, 17, 6, 13, 14, 12, 15, 18, 8, 11, 16, 10, 9},                 // Medellin Norte
                           {5, 16, 6, 9, 14, 8, 7, 12, 15, 4, 11, 12, 10, 13, 16, 6, 9, 14, 8, 7},                     // Sur
                           {3, 14, 4, 7, 12, 6, 5, 10, 13, 2, 9, 10, 8, 11, 14, 4, 7, 12, 6, 5},                       // Anioquia - Norte
                           {1, 12, 2, 5, 10, 4, 3, 8, 11, 0, 7, 8, 6, 9, 12, 2, 5, 10, 4, 3}};                         // Sur

    int precio[20] = {2047, 3696, 2304, 2664, 3000, 1750, 2250, 2052, 2550, 3250, 3400, 3024, 3000, 2700, 3600, 2400, 3600, 3000, 3500, 2400};
    string nombre, nomCiudadActual, nomSedeActual, empleados[2] = {""}, farmaceutico;
    int telefono, opcCiudad, opcSede, devolverse, opcFarm, cantMedi, carroCompra[20] = {0}, verStock, nTienda, totalCompra;
    cout << "Ingrese su nombre: ";   // Imprimir
    cin >> nombre;                   // Ingresar y guardar en la variable nombre
    cout << "Ingrese su telefono: "; // Imprimir
    cin >> telefono;                 // Ingresar y guardar en la variable telefono
    do
    {
        cout << "Digite la ciudad\n1.Bogota\n2.Medellin\n3.Barranquilla" << endl; // Imprimir
        cin >> opcCiudad;                                                         // Ingresar y guardar en la variable opcCiudad
        switch (opcCiudad)                                                        // Dependiendo de la opcion ingresada se ejecutara el case correspondiente
        {

        case 1:                                               // Si la opcion ingresada es 1 se ejecutara el case 1
            nomCiudadActual = "Bogota";                       // Se guarda en la variable nomCiudadActual "Bogota"
            cout << "Digite la sede\n1.Norte\n2.Sur" << endl; // Imprimir
            cin >> opcSede;                                   // Ingresar y guardar en la variable opcSede
            switch (opcSede)                                  // Dependiendo de la opcion ingresada se ejecutara el case correspondiente
            {
            case 1:                      // Si la opcion ingresada es 1 se ejecutara el case 1
                nTienda = 1;             // Se guarda en la variable nTienda el valor 1
                nomSedeActual = "Norte"; // Se guarda en la variable nomSedeActual "Norte"
                empleados[0] = "Juan";   // Se guarda en la posicion 0 del arreglo empleados "Juan"
                empleados[1] = "Maria";  // Se guarda en la posicion 1 del arreglo empleados "Maria"
                farmaceutico = "Pedro";  // Se guarda en la variable farmaceutico "Pedro"
                break;                   // Se sale del case 1
            case 2:                      // Si la opcion ingresada es 2 se ejecutara el case 2
                nTienda = 2;             // Se guarda en la variable nTienda el valor 2
                nomSedeActual = "Sur";   // Se guarda en la variable nomSedeActual "Sur"
                empleados[0] = "Pedro";  // Se guarda en la posicion 0 del arreglo empleados "Pedro"
                empleados[1] = "Luisa";  // Se guarda en la posicion 1 del arreglo empleados "Luisa"
                farmaceutico = "Maria";  // Se guarda en la variable farmaceutico "Maria"
                break;                   // Se sale del case 2
            }
            break;                                            // Se sale del case 1
        case 2:                                               // Si la opcion ingresada es 2 se ejecutara el case 2
            nomCiudadActual = "Medellin";                     // Se guarda en la variable nomCiudadActual "Medellin"
            cout << "Digite la sede\n1.Norte\n2.Sur" << endl; // Imprimir
            cin >> opcSede;                                   // Ingresar y guardar en la variable opcSede
            switch (opcSede)                                  // Dependiendo de la opcion ingresada se ejecutara el case correspondiente

            {
            case 1:                      // Si la opcion ingresada es 1 se ejecutara el case 1
                nTienda = 3;             // Se guarda en la variable nTienda el valor 3
                nomSedeActual = "Norte"; // Se guarda en la variable nomSedeActual "Norte"
                empleados[0] = "Carlos"; // Se guarda en la posicion 0 del arreglo empleados "Carlos"
                empleados[1] = "Ana";    // Se guarda en la posicion 1 del arreglo empleados "Ana"
                farmaceutico = "Luis";   // Se guarda en la variable farmaceutico "Luis"
                break;                   // Se sale del case 1
            case 2:                      // Si la opcion ingresada es 2 se ejecutara el case 2
                nTienda = 4;             // Se guarda en la variable nTienda el valor 4
                nomSedeActual = "Sur";   // Se guarda en la variable nomSedeActual "Sur"
                empleados[0] = "Luis";   // Se guarda en la posicion 0 del arreglo empleados "Luis"
                empleados[1] = "Julia";  // Se guarda en la posicion 1 del arreglo empleados "Julia"
                farmaceutico = "Ana";    // Se guarda en la variable farmaceutico "Ana"
                break;                   // Se sale del case 2
            }
            break; // Se sale del case 2

        case 3:                                               // Si la opcion ingresada es 3 se ejecutara el case 3
            nomCiudadActual = "Barranquilla";                 // Se guarda en la variable nomCiudadActual "Barranquilla"
            cout << "Digite la sede\n1.Norte\n2.Sur" << endl; // Imprimir
            cin >> opcSede;                                   // Ingresar y guardar en la variable opcSede
            switch (opcSede)                                  // Dependiendo de la opcion ingresada se ejecutara el case correspondiente

            {
            case 1:                      // Si la opcion ingresada es 1 se ejecutara el case 1
                nTienda = 5;             // Se guarda en la variable nTienda el valor 5
                nomSedeActual = "Norte"; // Se guarda en la variable nomSedeActual "Norte"
                empleados[0] = "Andres"; // Se guarda en la posicion 0 del arreglo empleados "Andres"
                empleados[1] = "Sofia";  // Se guarda en la posicion 1 del arreglo empleados "Sofia"
                farmaceutico = "Luisa";  // Se guarda en la variable farmaceutico "Luisa"
                break;                   // Se sale del case 1
            case 2:                      // Si la opcion ingresada es 2 se ejecutara el case 2
                nTienda = 6;             // Se guarda en la variable nTienda el valor 6
                nomSedeActual = "Sur";   // Se guarda en la variable nomSedeActual "Sur"
                empleados[0] = "Jorge";  // Se guarda en la posicion 0 del arreglo empleados "Jorge"
                empleados[1] = "Laura";  // Se guarda en la posicion 1 del arreglo empleados "Laura"
                farmaceutico = "Sofia";  // Se guarda en la variable farmaceutico "Sofia"
                break;                   // Se sale del case 2
            }
        }
        cout << "Bienvenido a la sede " << nomSedeActual << " de la ciudad de " << nomCiudadActual << endl; // Imprimir
        cout << "Los empleados de esta sede son: " << empleados[0] << " y " << empleados[1] << endl;        // Imprimir
        cout << "El farmaceutico de esta sede es: " << farmaceutico << endl;                                // Imprimir
        cout << "Medicamentos disponibles: " << endl;                                                       // Imprimir
        cout << "============================================================================" << endl;     // Imprimir
        cout << "Nombre   =    Cantidad  =   Precio" << endl;                                               // Imprimir
        for (int i = 0; i < 20; i++)                                                                        // For que recorre el arreglo 20 veces
        {
            cout << i + 1 << ". " << nomFarm[i][0] << " " << nomFarm[i][2] << " = " << cantFarm[nTienda - 1][i] << " = $" << precio[i] << endl; // Imprimir
        }
        cout << "Digite 0 para salir" << endl; // Imprimir
        do
        {
            cout << "Digite el numero del medicamento que desea comprar: "; // Imprimir
            cin >> opcFarm;                                                 // Ingresar y guardar en la variable opcFarm
            if (opcFarm == 0)                                               // Si la opcion ingresada es 0 se ejecutara el if
            {
                break; // Se sale del do-while
            }
            else // Si la opcion ingresada es diferente de 0 se ejecutara lo siguiente
            {
                cout << "Digite la cantidad que desea comprar: ";   // Imprimir
                cin >> cantMedi;                                    // Ingresar y guardar en la variable cantMedi
                if (cantFarm[nTienda - 1][opcFarm - 1] >= cantMedi) // Si la cantidad de medicamentos en la tienda es mayor o igual a la cantidad de medicamentos que se desea comprar se ejecutara el if
                {
                    carroCompra[opcFarm - 1] += cantMedi;           // Se guarda en la posicion del arreglo carroCompra la cantidad de medicamentos que se desea comprar
                    cantFarm[nTienda - 1][opcFarm - 1] -= cantMedi; // Se resta la cantidad de medicamentos que se desea comprar a la cantidad de medicamentos que hay en la tienda
                    totalCompra += cantMedi * precio[opcFarm - 1];  // Se guarda en la variable totalCompra la cantidad de medicamentos que se desea comprar por el precio del medicamento
                }
                else // Si la cantidad de medicamentos en la tienda es menor a la cantidad de medicamentos que se desea comprar se ejecutara lo siguiente
                {
                    cout << "No hay suficientes medicamentos" << endl; // Imprimir
                }
            }
        } while (opcFarm != 0 || cantMedi != 0);                                                                                        // Mientras la opcion ingresada sea diferente de 0 o la cantidad de medicamentos sea diferente de 0 se ejecutara el do-while
        cout << "============================================================================" << endl;                                 // Imprimir
        cout << "Nota: Al digitar la opcion 1.Si se obtiene mas informacion del medicamento" << endl;                                   // Imprimir
        cout << "Desea ver el stock de la sede " << nomSedeActual << " de la ciudad de " << nomCiudadActual << "?\n1.Si\n2.No" << endl; // Imprimir
        cin >> verStock;                                                                                                                // Ingresar y guardar en la variable verStock
        if (verStock == 1)                                                                                                              // Si la opcion ingresada es 1 se ejecutara el if
        {
            cout << "============================================================================" << endl; // Imprimir
            cout << "Nombre   =   Laboratorio   =   Cantidad   =   Precio  =   Descripcion" << endl;        // Imprimir
            for (int i = 0; i < 20; i++)                                                                    // For que recorre el arreglo 20 veces
            {
                cout << i + 1 << ". " << nomFarm[i][0] << " = " << nomFarm[i][1] << " = " << cantFarm[nTienda - 1][i] << " = $" << precio[i] << " = " << nomFarm[i][3] << endl; // Imprimir
            }
        }
        cout << "Desea devolverse a la ciudad?\n1.Si\n2.No" << endl; // Imprimir
        cin >> devolverse;                                           // Ingresar y guardar en la variable devolverse
        if (devolverse == 2)
        {
            system("cls"); // Limpiar la pantalla
        }
    } while (devolverse == 1);                                                                      // Mientras la opcion ingresada sea 1 se ejecutara el do-while
    cout << "Gracias por su compra" << endl;                                                        // Imprimir
    cout << "======= Factura =======" << endl;                                                      // Imprimir
    cout << "Nombre: " << nombre << endl;                                                           // Imprimir
    cout << "Telefono: " << telefono << endl;                                                       // Imprimir
    cout << "Ciudad: " << nomCiudadActual << endl;                                                  // Imprimir
    cout << "Sede: " << nomSedeActual << endl;                                                      // Imprimir
    cout << "Farmaceutico: " << farmaceutico << endl;                                               // Imprimir
    cout << "Medicamentos comprados: " << endl;                                                     // Imprimir
    cout << "============================================================================" << endl; // Imprimir
    cout << "Nombre   =  Cantidad   =   Precio" << endl;                                            // Imprimir
    for (int i = 0; i < 20; i++)                                                                    // For que recorre el arreglo 20 veces
    {
        if (carroCompra[i] != 0) // Si la posicion del arreglo carroCompra es diferente de 0 se ejecutara el if
        {
            cout << i + 1 << ". " << nomFarm[i][0] << " " << nomFarm[i][2] << " = " << carroCompra[i] << " = $" << carroCompra[i] * precio[i] << endl; // Imprimir
        }
    }
    cout << "Total a pagar: $" << totalCompra << endl; // Imprimir
}
