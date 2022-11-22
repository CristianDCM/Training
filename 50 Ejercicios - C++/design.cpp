#include <iostream>
#include <windows.h> 
#define Color SetConsoleTextAttribute //Se define un nuevo nombre para la funcion SetConsoleTextAttribute
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Creacion objeto de la clase HANDLE para poder usar la funcion SetConsoleTextAttribute Y se le asigna el valor de la funcion GetStdHandle que devuelve un manejador de la consola de salida
void design_menu(){
    string design_ascii[5] = {"|  ___     _                    _        _                  _         ___    __   |",
                              "| | __|   (_)  ___   _ _   __  (_)  __  (_)  ___   ___     / |  ___  | __|  /  \\  |",
                              "| | _|    | | / -_) | '_| / _| | | / _| | | / _ \\ (_-<     | | |___| |__ \\ | () | |",
                              "| |___|  _/ | \\___| |_|   \\__| |_| \\__| |_| \\___/ /__/     |_|       |___/  \\__/  |",
                              "|       |__/                                                                      |"};
    for (int i = 0; i < 5; i++){
        cout << design_ascii[i] << endl;
        if (i == 0) Color(hConsole, 14); //Amarillo
        if (i == 2) Color(hConsole, 9); //Azul
        if (i == 4) Color(hConsole, 12); //Rojo
    }
}
void line(){
    Color(hConsole, 12);  //Rojo
    cout << "-----------------------------------------------------------------------------------" << endl;
}

void line1(){
    Color(hConsole, 14); //Amarillo
    cout << "-----------------------------------------------------------------------------------" << endl;
}
