//@Author: CDCM
//Errores dentro de los puntos de entrada de casos de prueba(Bucle) 
#include <iostream>
#include <locale.h> // Funcion caracteres especiales
#include <stdlib.h>
#include "txt.cpp" //Función imprimir texto
#include "training.cpp" //Funcion ejercicios
using namespace std;
int main(){
system("color 0A"); //Color consola
setlocale(LC_ALL, ""); 
int Opciones; string Bucle;
do{
cout << "Digite el número del ejercicio que desea ejecutar: ";
cin >> Opciones;
while (cin.fail()){ //fail es un metodo de la clase cin que devuelve true si se ha producido un error en la extracción
    cin.clear(); //limpia el error
    cin.ignore(256,'\n');  //ignora los caracteres que se han introducido
    cout << "Opcion no valida, Digite una opcion valida"<< endl; 
    cin >> Opciones;
}
switch (Opciones){
    case 1:
        txt(Opciones);ejercicio1();break;
    case 2:
        txt(Opciones);ejercicio2();break;
    case 3:
        txt(Opciones);ejercicio3();break;
    case 4:
        txt(Opciones);ejercicio4();break;
    case 5:
        txt(Opciones);ejercicio5();break;
    case 6:
        txt(Opciones);ejercicio6();break;
    case 7:
        txt(Opciones);ejercicio7();break;
    case 8:
        txt(Opciones);ejercicio8();break;
    case 9:
        txt(Opciones);ejercicio9();break;
    case 10:
        txt(Opciones);ejercicio10();break;
    case 11:
        txt(Opciones);ejercicio11();break;
    case 12:
        txt(Opciones);ejercicio12();break;
    case 13:
        txt(Opciones);ejercicio13();break;
    case 14:
        txt(Opciones);ejercicio14();break;
    case 15:
        txt(Opciones);ejercicio15();break;
    case 16:
        txt(Opciones);ejercicio16();break;
    case 17:
        txt(Opciones);ejercicio17();break;
    case 18:
        txt(Opciones);ejercicio18();break;
    case 19:
        txt(Opciones);ejercicio19();break;
    case 20:
        txt(Opciones);ejercicio20();break;
    case 21:
        txt(Opciones);ejercicio21();break;
    case 22:
        txt(Opciones);ejercicio22();break;
    case 23:
        txt(Opciones);ejercicio23();break;
    case 24:
        txt(Opciones);ejercicio24();break;
    case 25:
        txt(Opciones);ejercicio25();break;
    case 26:
        txt(Opciones);ejercicio26();break;
    case 27:  
        txt(Opciones);ejercicio27();break;
    case 28:
        txt(Opciones);ejercicio28();break;
    case 29:
        txt(Opciones);ejercicio29();break;
    case 30:
        txt(Opciones);ejercicio30();break;
    case 31:
        txt(Opciones);ejercicio31();break;
    case 32:
        txt(Opciones);ejercicio32();break; 
    case 33:
        txt(Opciones);ejercicio33();break;
    case 34:
        txt(Opciones);ejercicio34();break;
    case 35:
        txt(Opciones);ejercicio35();break;
    case 36:
        txt(Opciones);ejercicio36();break;
    case 37:
        txt(Opciones);ejercicio37();break;
    case 38:
        txt(Opciones);ejercicio38();break;
    case 39:
        txt(Opciones);ejercicio39();break;
    case 40:
        txt(Opciones);ejercicio40();break;
    case 41:
        txt(Opciones);ejercicio41();break;
    case 42:
        txt(Opciones);ejercicio42();break;
    case 43:
        txt(Opciones);ejercicio43();break;
    case 44:
        txt(Opciones);ejercicio44();break;
    case 45:
        txt(Opciones);ejercicio45();break;
    case 46:
        txt(Opciones);ejercicio46();break;
    case 47:
        txt(Opciones);ejercicio47();break;
    case 48:
        txt(Opciones);ejercicio48();break;
    case 49:
        txt(Opciones);ejercicio49();break;
    case 50:
        txt(Opciones);ejercicio50();break;
}
do{
cout << "Desea ejecutar otro ejercicio? (S/N) ";cin >> Bucle;
if (Bucle == "N" || Bucle == "n"){
    cout << "Gracias por usar el programa :D" << endl;
}
else if (Bucle == "S" || Bucle == "s"){
    system("cls");
    cin.clear();
}
else{
    cout << "Opcion no valida, Digite una opcion valida" << endl;
}
}while (Bucle != "S" && Bucle != "s" && Bucle != "N" && Bucle != "n"); //Bucle rep pregunta Ejecutar otro ejercicio?
}while (Bucle == "S" || Bucle == "s" ); //Bucle rep "S" o "s"

return 0;
}
