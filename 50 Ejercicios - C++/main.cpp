#include <iostream>
#include <locale.h>// Caracteres especiales
#include "design.cpp"//Diseño
#include "txt.cpp"//Texto
#include "training.cpp"//Ejercicios
using namespace std;

int main()
{
    system("mode con: cols=87 lines=38"); // Default(80,25)
    system("title 50 Ejercicios - C++");  // Titulo consola
    setlocale(LC_ALL, "spanish");        // Caracteres especiales (ñ,á,é,í,ó,ú)
    int Opciones, Bucle;
    do
    {
        Line1();
        Design_menu();
        Line();
        cout << "- Digite el número del Ejercicio que desea ejecutar: ";
        cin >> Opciones;
        switch (Opciones)
        {
        case 1:
            Txt(Opciones);
            Ejercicio1();
            break;
        case 2:
            Txt(Opciones);
            Ejercicio2();
            break;
        case 3:
            Txt(Opciones);
            Ejercicio3();
            break;
        case 4:
            Txt(Opciones);
            Ejercicio4();
            break;
        case 5:
            Txt(Opciones);
            Ejercicio5();
            break;
        case 6:
            Txt(Opciones);
            Ejercicio6();
            break;
        case 7:
            Txt(Opciones);
            Ejercicio7();
            break;
        case 8:
            Txt(Opciones);
            Ejercicio8();
            break;
        case 9:
            Txt(Opciones);
            Ejercicio9();
            break;
        case 10:
            Txt(Opciones);
            Ejercicio10();
            break;
        case 11:
            Txt(Opciones);
            Ejercicio11();
            break;
        case 12:
            Txt(Opciones);
            Ejercicio12();
            break;
        case 13:
            Txt(Opciones);
            Ejercicio13();
            break;
        case 14:
            Txt(Opciones);
            Ejercicio14();
            break;
        case 15:
            Txt(Opciones);
            Ejercicio15();
            break;
        case 16:
            Txt(Opciones);
            Ejercicio16();
            break;
        case 17:
            Txt(Opciones);
            Ejercicio17();
            break;
        case 18:
            Txt(Opciones);
            Ejercicio18();
            break;
        case 19:
            Txt(Opciones);
            Ejercicio19();
            break;
        case 20:
            Txt(Opciones);
            Ejercicio20();
            break;
        case 21:
            Txt(Opciones);
            Ejercicio21();
            break;
        case 22:
            Txt(Opciones);
            Ejercicio22();
            break;
        case 23:
            Txt(Opciones);
            Ejercicio23();
            break;
        case 24:
            Txt(Opciones);
            Ejercicio24();
            break;
        case 25:
            Txt(Opciones);
            Ejercicio25();
            break;
        case 26:
            Txt(Opciones);
            Ejercicio26();
            break;
        case 27:
            Txt(Opciones);
            Ejercicio27();
            break;
        case 28:
            Txt(Opciones);
            Ejercicio28();
            break;
        case 29:
            Txt(Opciones);
            Ejercicio29();
            break;
        case 30:
            Txt(Opciones);
            Ejercicio30();
            break;
        case 31:
            Txt(Opciones);
            Ejercicio31();
            break;
        case 32:
            Txt(Opciones);
            Ejercicio32();
            break;
        case 33:
            Txt(Opciones);
            Ejercicio33();
            break;
        case 34:
            Txt(Opciones);
            Ejercicio34();
            break;
        case 35:
            Txt(Opciones);
            Ejercicio35();
            break;
        case 36:
            Txt(Opciones);
            Ejercicio36();
            break;
        case 37:
            Txt(Opciones);
            Ejercicio37();
            break;
        case 38:
            Txt(Opciones);
            Ejercicio38();
            break;
        case 39:
            Txt(Opciones);
            Ejercicio39();
            break;
        case 40:
            Txt(Opciones);
            Ejercicio40();
            break;
        case 41:
            Txt(Opciones);
            Ejercicio41();
            break;
        case 42:
            Txt(Opciones);
            Ejercicio42();
            break;
        case 43:
            Txt(Opciones);
            Ejercicio43();
            break;
        case 44:
            Txt(Opciones);
            Ejercicio44();
            break;
        case 45:
            Txt(Opciones);
            Ejercicio45();
            break;
        case 46:
            Txt(Opciones);
            Ejercicio46();
            break;
        case 47:
            Txt(Opciones);
            Ejercicio47();
            break;
        case 48:
            Txt(Opciones);
            Ejercicio48();
            break;
        case 49:
            Txt(Opciones);
            Ejercicio49();
            break;
        case 50:
            Txt(Opciones);
            Ejercicio50();
            break;
        default:
            cout << "Opción no válida, por favor digite un número del 1 al 50" << endl;
            break;
        }
        Line();
        cout << "- Desea ejecutar otro ejercicio? | 1.Si | 2.No |"<<endl;
        cin >> Bucle;
        system("cls");
        if (Bucle == 2)
        {
            cout << "Gracias por usar el programa" << endl;
        }
    } while (Bucle == 1);
}