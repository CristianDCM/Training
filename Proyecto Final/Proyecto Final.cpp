#include <iostream>
#include <locale.h>
using namespace std;
void design(int x)
{
    switch (x)
    {
    case 1:
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        break;
    case 2:
        cout << "--------------------------------------------------------" << endl;
        break;
    }
}

string mplpa[20][4] = { // Datos
    {"Paracetamol   ", "Sanofi         ", "Tabletas 500mg  ", "Alivio del dolor y la fiebre                   "},
    {"Ibuprofeno    ", "GlaxoSmithKline", "Tabletas 400mg  ", "Alivio del dolor y la inflamacion              "},
    {"Amoxicilina   ", "Merck          ", "Capsulas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Omeprazol     ", "Astrazeneca    ", "Tabletas 20mg   ", "Prevencion y tratamiento de ulceras estomacales"},
    {"Dexametasona  ", "Sanofi         ", "Ampollas 4mg/ml ", "Tratamiento de enfermedades inflamatorias      "},
    {"Metformina    ", "Merck          ", "Tabletas 500mg  ", "Control de la diabetes tipo 2                  "},
    {"Azitromicina  ", "Pfizer         ", "Tabletas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Cefalexina    ", "GlaxoSmithKline", "Capsulas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Ketorolaco    ", "Astrazeneca    ", "Tabletas 10mg   ", "Alivio del dolor intenso                       "},
    {"Bupropion    ", "GlaxoSmithKline", "Tabletas 150mg  ", "Tratamiento de la depresion y el TLP           "},
    {"Metronidazol ", "Sanofi         ", "Tabletas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Diclofenaco  ", "Astrazeneca    ", "Tabletas 50mg   ", "Alivio del dolor y la inflamacion              "},
    {"Caritromicina", "Pfizer         ", "Tabletas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Ranitidina   ", "Merck          ", "Tabletas 150mg  ", "Prevencion y tratamiento de ulceras estomacales"},
    {"Aciclovir    ", "GlaxoSmithKline", "Crema 5%        ", "Tratamiento de infecciones virales             "},
    {"Furosemida   ", "Sanofi         ", "Tabletas 40mg   ", "Disminucion de la presion arterial             "},
    {"Ampicilina   ", "Merck          ", "Capsulas 500mg  ", "Tratamiento de infecciones bacterianas         "},
    {"Ondansetron  ", "Astrazeneca    ", "Ampollas 4mg/2ml", "Prevencion de nauseas y vomitos                "},
    {"Prednisona   ", "Pfizer         ", "Tabletas 5mg    ", "Tratamiento de enfermedades inflamatorias      "},
    {"Nifedipina   ", "GlaxoSmithKline", "Tabletas 10mg   ", "Disminucion de la presion arterial             "}};
int precio[20] = {8500, 4000, 20000, 13500, 9000, 25000, 32000, 12000, 15000, 35000, 14000, 10000, 28000, 9500, 7000, 18000, 23000, 38000, 12500, 35000};
int stocks[6][20] = {{13, 12, 12, 45, 12, 2, 21, 21, 3, 45, 21, 11, 6, 23, 54, 13, 32, 10, 12, 12},
                     {22, 41, 36, 22, 21, 35, 35, 17, 10, 28, 43, 8, 5, 4, 47, 31, 34, 42, 11, 24},
                     {38, 38, 50, 21, 27, 11, 32, 14, 46, 15, 31, 18, 26, 6, 16, 35, 35, 1, 21, 8},
                     {48, 47, 10, 28, 38, 23, 15, 5, 25, 19, 46, 5, 3, 43, 39, 34, 4, 18, 9, 20},
                     {22, 40, 40, 1, 9, 39, 22, 49, 28, 6, 3, 41, 36, 48, 16, 16, 20, 12, 10, 28},
                     {38, 6, 15, 5, 47, 28, 9, 11, 38, 50, 9, 21, 8, 25, 4, 4, 45, 23, 33, 34}

};

int main()
{
    setlocale(LC_ALL, "spanish");
    int opcStock, opcCity, sede, cedula, opcMedicamento, bucle, bucle2, numSede;
    string nombre, farmaceutico, nSede, nCity, empleados[2];
    cout << "Digite sus datos: " << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Cedula: ";
    cin >> cedula;
    do
    {
        cout << "Digite la ciudad: " << endl;
        cout << "1. Bogota\n2. Medellin\n3. Barranquilla" << endl;
        cin >> opcCity;
        cout << "Digite la sede: " << endl;
        cout << "1. Norte\n2. Sur" << endl;
        cin >> sede;
        switch (opcCity)
        {
        case 1:
            nCity = "Bogota";
            if (sede == 1)
            {
                nSede = "Norte";
                numSede = 1;
                farmaceutico = "Juan";
                empleados[0] = "Pedro";
                empleados[1] = "Camilo";
            }
            else if (sede == 2)
            {
                nSede = "Sur";
                numSede = 2;
                farmaceutico = "Maria";
                empleados[0] = "Diego";
                empleados[1] = "Andres";
            }
            break;
        case 2:
            nCity = "Medellin";
            if (sede == 1)
            {
                nSede = "Norte";
                numSede = 3;
                farmaceutico = "Pedro";
                empleados[0] = "Paula";
                empleados[1] = "Ricardo";
            }
            else if (sede == 2)
            {
                nSede = "Sur";
                numSede = 4;
                farmaceutico = "Luis";
                empleados[0] = "Camila";
                empleados[1] = "Roger";
            }
            break;
        case 3:
            nCity = "Barranquilla";
            if (sede == 1)
            {
                nSede = "Norte";
                numSede = 5;
                farmaceutico = "Carlos";
                empleados[0] = "Luis";
                empleados[1] = "Santiago";
            }
            else if (sede == 2)
            {
                nSede = "Sur";
                numSede = 6;
                farmaceutico = "Ana";
                empleados[0] = "Ramiro";
                empleados[1] = "Luisa";
            }
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << "Medicamentos dentro de la farmacia: " << endl;
        cout << nCity << " - " << nSede << endl;
        design(1);
        cout << "|  Medicamento\t | Cantidad |  Laboratorio\t    | Presentacion\t| Accion" << endl;
        design(1);
        for (int i = 0; i < 20; i++)
        {
            cout << "|" << i + 1 << ". " << mplpa[i][0] << " - " << stocks[numSede - 1][i] << " - " << mplpa[i][1] << " - " << mplpa[i][2] << " - " << mplpa[i][3] << endl; // Imprime la matriz de medicamentos
        }
        design(1);
        cout << "- Presione 0 para terminar la compra -" << endl;
        string medicamentosComprados[20];
        int contador = 0, totalMedi = 0, total = 0, valorUnitario[20], cantidadMedicamentos[20];
        do
        {
            cout << "Digite el numero del medicamento que desea comprar: ";
            cin >> opcMedicamento;
            if (opcMedicamento == 0)
            {
                break;
            }
            else if (opcMedicamento > 20)
            {
                cout << "Opcion no valida" << endl;
            }
            else
            {
                cout << "- Digite la cantidad: ";
                cin >> cantidadMedicamentos[contador]; // Guarda la cantidad de medicamentos comprados en un arreglo
                // if que value ahi si hay stock suficiente
                if (cantidadMedicamentos[contador] > stocks[numSede - 1][opcMedicamento - 1])
                {
                    cout << "No hay stock suficiente" << endl;
                }
                else
                {
                    if (cantidadMedicamentos[contador] > 20)
                    { // Si la cantidad de medicamentos es mayor a 10
                        do
                        {
                            cout << "La cantidad maxima es 10, digite nuevamente: ";
                            cin >> cantidadMedicamentos[contador];
                        } while (cantidadMedicamentos[contador] > 10);
                    }
                    else
                    {
                        valorUnitario[contador] = precio[opcMedicamento - 1]; // Guarda el valor unitario de cada medicamento en un arreglo
                        total += precio[opcMedicamento - 1] * cantidadMedicamentos[contador]; // Calcula el total de la compra
                        medicamentosComprados[contador] = mplpa[opcMedicamento - 1][0];       // Guarda los medicamentos comprados en un arreglo
                        stocks[numSede - 1][opcMedicamento - 1] -= cantidadMedicamentos[contador]; // Resta la cantidad de medicamentos comprados al stock
                        contador++; // Aumenta el contador
                    }
                }
            }
        } while (opcMedicamento != 0);
        cout << "---------------------- Factura -------------------------" << endl;
        cout << "| Nombre: " << nombre << endl;
        cout << "| Cedula: " << cedula << endl;
        cout << "| Farmaceutico: " << farmaceutico << endl;
        cout << "| Ciudad: " << nCity << " - Sede " << nSede << endl;
        design(2);
        cout << "| Medicamentos     | Cantidad | Valor Unitario | Total " << endl;
        design(2);
        for (int i = 0; i < contador; i++)
        {
            cout << "|" << medicamentosComprados[i] << "    |    " << cantidadMedicamentos[i] << "     |     $" << valorUnitario[i] << "      |  $" << valorUnitario[i] * cantidadMedicamentos[i] << endl;
        }
        design(2);
        cout << "| Total de la compra: $" << total << endl;
        design(2);

        cout << "Deseas ver el stock de la farmacia actual? | 1.Si | 2.No |" << endl;
        cin >> opcStock;
        if (opcStock == 1)
        {
            cout << "Medicamentos dentro de la farmacia: " << endl;
            cout << nCity << " - " << nSede << endl;
            design(1);
            cout << "|   Medicamento\t | Cantidad |  Laboratorio\t    | Presentacion\t| Accion" << endl;
            design(1);
            for (int i = 0; i < 20; i++)
            {
                cout << "|" << i + 1 << ". " << mplpa[i][0] << " - " << stocks[numSede - 1][i] << " - " << mplpa[i][1] << " - " << mplpa[i][2] << " - " << mplpa[i][3] << endl;
            }
            design(1);
        }
        cout << "Deseas ir a otra ciudad? | 1.Si | 2.No |" << endl;
        cin >> bucle;
        if (bucle == 1)
        {
            system("cls");
        }
        else
        {
            cout << "Gracias por su compra" << endl;
            break;
        }
    } while (bucle == 1);
}