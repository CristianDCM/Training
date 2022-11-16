// pedro es el dueño de AFT-LTDA  una empresa dedicada al préstamo  de dinero; esta empresa maneja un porcentaje dependiendo del monto prestado, la empresa mensualmente presta hasta 150.000 de pesos.
// Según la siguiente tabla Menor o igual a 120.000 con un porcentaje del 3%
// Mayor a 200.000 y menor de 350.000  con un porcentaje del 12%
// Mayor o igual a 400.000 y menor  de 600.000 con un porcentaje del 14%
// Mayor o igual a 600.000 y menor  o igual de 900.000 con un porcentaje del 25%
// Teniendo en cuenta  que un préstamo se podrá pagar en máximo  100 días y que la persona sea mayor de edad. Preguntar el nombre, dirección teléfono y nombre del asesor.
// Determinar cuál es el monto prestado por persona, cuanto pagara por 15 días, el valor total a pagar y el dinero  disponible para seguir prestando.
#include "iostream"
using namespace std;
int main(){
    string nombre, direccion, telefono, asesor;
    int prestamo, porcentaje, total, disponible;
    cout << "Ingrese su nombre: ";cin >> nombre;
    cout << "Ingrese su direccion: ";cin >> direccion;
    cout << "Ingrese su telefono: ";cin >> telefono;
    cout << "Ingrese el nombre del asesor: ";cin >> asesor;
    cout << "Ingrese el monto del prestamo: ";cin >> prestamo;
    if (prestamo <= 120000){
        porcentaje = prestamo * 0.03;
        total = porcentaje + prestamo;
        disponible = 150000 - total;
        cout << "El monto prestado es: " << prestamo << endl;
        cout << "El porcentaje es: " << porcentaje << endl;
        cout << "El total a pagar es: " << total << endl;
        cout << "El dinero disponible es: " << disponible << endl;
        cout << "Pago por 15 dias: " << total / 100 * 15 << endl;
    }
    else if (prestamo > 200000 && prestamo < 350000){
        porcentaje = prestamo * 0.12;
        total = porcentaje + prestamo;
        disponible = 150000 - total;
        cout << "El monto prestado es: " << prestamo << endl;
        cout << "El porcentaje es: " << porcentaje << endl;
        cout << "El total a pagar es: " << total << endl;
        cout << "El dinero disponible es: " << disponible << endl;
        cout << "Pago por 15 dias: " << total / 100 * 15 << endl;
    }
    else if (prestamo >= 400000 && prestamo < 600000){
        porcentaje = prestamo * 0.14;
        total = porcentaje + prestamo;
        disponible = 150000 - total;
        cout << "El monto prestado es: " << prestamo << endl;
        cout << "El porcentaje es: " << porcentaje << endl;
        cout << "El total a pagar es: " << total << endl;
        cout << "El dinero disponible es: " << disponible << endl;
        cout << "Pago por 15 dias: " << total / 100 * 15 << endl;
    }
    else if (prestamo >= 600000 && prestamo <= 900000){
        porcentaje = prestamo * 0.25;
        total = porcentaje + prestamo;
        disponible = 150000 - total;
        cout << "El monto prestado es: " << prestamo << endl;
        cout << "El porcentaje es: " << porcentaje << endl;
        cout << "El total a pagar es: " << total << endl;
        cout << "El dinero disponible es: " << disponible << endl;
        cout << "Pago por 15 dias: " << total / 100 * 15 << endl;
    }
    else{
        cout << "El prestamo no puede ser mayor a 900.000" << endl;
    }
    return 0;
}
