#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
//  todas las farmacias de esa ciudad. Cada farmacia tiene a su vez su stock de medicamentos. El mismo se mantiene por medicamento y presentaci�n.
//  Los medicamentos se organizan seg�n la o las mono drogas que lo componen, su presentaci�n
//  (por ejemplo ampollas de 5 unidades, jarabe de 100ml, inyecciones  por  10  unidades,  pomada  60gr,  etc.),?
//  el  laboratorio  que  lo  comercializa,  y  su  acci�n terap�utica (analg�sico, antibi�tico, etc.).
//  Por cada medicamento se mantiene su precio y la cantidad en existencia del mismo.
//  El sistema deber� permitir consultar la base de datos de diferentes alternativas para medicamentos compuestos por una mono droga,
//  medicamentos de un laboratorio, presentaciones de un medicamento, entre otras.*/
//  Nota 3: m�nimo dos sedes (sucursal norte-sur) stock = 20 medicamentos = precio
//  Nota 4: no puedo vender mas de la cantidad permitida en stock por medicamento
//  Nota 5: revisar en las dem�s sucursales si existe el medicamento
//  Nota 6. ingresar el nombre de la persona y cedula del usuario
//  Nota 7. debemos de organizar los medicamentos por mono drogas (laboratorio-proveedor -alfa)
//  Nota8. Imprimir el nombre del usuario(cedula), nombre del farmac�utico, los medicamentos que compro+ el valor y el descuento si lo tiene
void design(int x){
    switch (x){
    case 1:
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        break;
    case 2:
        cout << "--------------------------------------------------------" << endl;
        break;
    }
}

int main(){
    setlocale(LC_ALL, "spanish");
    string mplpa[20][4] = { //Datos
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
    int opcCity, sede, cedula, opcMedicamento, bucle;
    string nombre, farmaceutico, nSede, nCity, empleados[2];
    do{
        cout << "Digite sus datos: " << endl;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Cedula: ";
        cin >> cedula;
        cout << "Digite la ciudad: " << endl;
        cout << "1. Bogota\n2. Medellin\n3. Barranquilla" << endl;
        cin >> opcCity;
        cout << "Digite la sede: " << endl;
        cout << "1. Norte\n2. Sur" << endl;
        cin >> sede;
        switch (opcCity){
        case 1:
            nCity = "Bogota";
            if (sede == 1){
                nSede = "Norte";
                farmaceutico = "Juan";
                empleados[0] = "Pedro";
                empleados[1] = "Camilo";
            }
            else if (sede == 2){
                nSede = "Sur";
                farmaceutico = "Maria";
                empleados[0] = "Diego";
                empleados[1] = "Andres";
            }
            break;
        case 2:
            nCity = "Medellin";
            if (sede == 1){
                nSede = "Norte";
                farmaceutico = "Pedro";
                empleados[0] = "Paula";
                empleados[1] = "Ricardo";
            }
            else if (sede == 2){
                nSede = "Sur";
                farmaceutico = "Luis";
                empleados[0] = "Camila";
                empleados[1] = "Roger";
            }
            break;
        case 3:
            nCity = "Barranquilla";
            if (sede == 1){
                nSede = "Norte";
                farmaceutico = "Carlos";
                empleados[0] = "Luis";
                empleados[1] = "Santiago";
            }
            else if (sede == 2){
                nSede = "Sur";
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
        cout << "|   Medicamento\t  | Laboratorio\t    | Presentacion\t| Accion                                         |" << endl;
        design(1);
        for (int i = 0; i < 20; i++){
            cout << "|" << i + 1 << ". " << mplpa[i][0] << " - " << mplpa[i][1] << " - " << mplpa[i][2] << " - " << mplpa[i][3] << "|" << endl; //Imprime la matriz de medicamentos
        }
        design(1);
        cout << "- Presione 0 para terminar la compra -" << endl;
        string medicamentosComprados[20];
        int contador = 0, totalMedi = 0, total = 0, valorUnitario[20], cantidadMedicamentos[20];
        do{
            cout << "Digite el numero del medicamento que desea comprar: ";
            cin >> opcMedicamento;
            if (opcMedicamento == 0){
                break;
            }
            else if (opcMedicamento > 20){
                cout << "Opcion no valida" << endl;
            }
            else{
                cout << "- Digite la cantidad: ";
                cin >> cantidadMedicamentos[contador]; //Guarda la cantidad de medicamentos comprados en un arreglo 
                if (cantidadMedicamentos[contador] > 10){ //Si la cantidad de medicamentos es mayor a 10
                    do{
                        cout << "La cantidad maxima es 10, digite nuevamente: ";
                        cin >> cantidadMedicamentos[contador];
                    } while (cantidadMedicamentos[contador] > 10);
                }
                else{
                    medicamentosComprados[contador] = mplpa[opcMedicamento - 1][0]; //almacena el nombre del medicamento
                    valorUnitario[contador] = precio[opcMedicamento - 1]; //valor unitario de cada medicamento
                    total += precio[opcMedicamento - 1] * cantidadMedicamentos[contador]; 
                    contador++;
                }
            }
        }while (opcMedicamento != 0);
        cout << "---------------------- Factura -------------------------" << endl;
        cout << "| Nombre: " << nombre << endl;
        cout << "| Cedula: " << cedula << endl;
        cout << "| Farmaceutico: " << farmaceutico << endl;
        cout << "| Ciudad: " << nCity << " - Sede " << nSede << endl;
        design(2);
        cout << "| Medicamentos     | Cantidad | Valor Unitario | Total " << endl;
        design(2);
        for (int i = 0; i < contador; i++){
            cout << "|" << medicamentosComprados[i] << "    |    " << cantidadMedicamentos[i] << "     |     $" << valorUnitario[i] << "      |  $" << valorUnitario[i] * cantidadMedicamentos[i] << endl;
        }
        design(2);
        cout << "| Total de la compra: $" << total << endl;
        design(2);
        cout << "Desea restaurar la compra de medicamentos? | 1.Si | 2.No |" << endl;
        cin >> bucle;
        if (bucle == 1){
            system("cls");
        }
        else if (bucle == 2){
            cout << "Gracias por su compra" << endl;
        }
    }while (bucle == 1);
}