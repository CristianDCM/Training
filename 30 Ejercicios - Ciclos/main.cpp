#include <iostream>
#include <locale.h> //Caracteres especiales
#include "training.cpp" //Ejericios
#include "txt.cpp" //Archivos de texto
#include "design.cpp" //Diseño
using namespace std;
int main()
{
    setlocale(LC_ALL, "spanish"); //Caracteres especiales
    int Opc, Bucle;
    do
    {
        Line1();Design_menu();Line();
        cout << "Digita el número del ejercicio que deseas ver: ";
        cin >> Opc;
        Line();
        switch (Opc)
        {
        case 1:
            Text(Opc);
            Ejercicio1();
            break;
        case 2:
            Text(Opc);
            Ejercicio2();
            break;
        case 3:
            Text(Opc);
            Ejercicio3();
            break;
        case 4:
            Text(Opc);
            Ejercicio4();
            break;
        case 5:
            Text(Opc);
            Ejercicio5();
            break;
        case 6:
            Text(Opc);
            Ejercicio6();
            break;
        case 7:
            Text(Opc);
            Ejercicio7();
            break;
        case 8:
            Text(Opc);
            Ejercicio8();
            break;
        case 9:
            Text(Opc);
            Ejercicio9();
            break;
        case 10:
            Text(Opc); //?
            break;
        case 11:
            Text(Opc);
            Ejercicio11();
            break;
        case 12:
            Text(Opc);
            Ejercicio12();
            break;
        case 13:
            Text(Opc);
            Ejercicio13();
            break;
        case 14:
            Text(Opc);
            Ejercicio14();
            break;
        case 15:
            Text(Opc);
            Ejercicio15();
            break;
        case 16:
            Text(Opc);
            Ejercicio16();
            break;
        case 17:
            Text(Opc);
            Ejercicio17();
            break;
        case 18:
            Text(Opc);
            Ejercicio18();
            break;
        case 19:
            Text(Opc);
            Ejercicio19();
            break;
        case 20:
            Text(Opc);
            Ejercicio20();
            break;
        case 21:
            Text(Opc);
            Ejercicio21();
            break;
        case 22:
            Text(Opc);
            Ejercicio22();
            break;
        case 23:
            Text(Opc);
            Ejercicio23();
            break;
        case 24:
            Text(Opc);
            Ejercicio24();
            break;
        case 25:
            Text(Opc);
            Ejercicio25();
            break;
        case 26:
            Text(Opc);
            Ejercicio26();
            break;
        case 27:
            Text(Opc);
            Ejercicio27();
            break;
        case 28:
            Text(Opc);
            Ejercicio28();
            break;
        case 29:
            Text(Opc);
            Ejercicio29();
            break;
        case 30:
            Text(Opc);
            Ejercicio30();
            break;
        default:
            cout << "Digite una opcion valida";
            break;
        }
        Line();
        cout << "Desea ver otro ejercicio? | 1.Si | 2.No |"<< endl;
        cin >> Bucle;
        system("cls");
        if (Bucle == 2)
        {
            cout << "Gracias por usar el programa" << endl;
        }
    } while (Bucle == 1);
}