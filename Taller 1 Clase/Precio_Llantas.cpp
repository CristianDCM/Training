// Realizar un algoritmo En una llantera se ha establecido una promoción de las llantas marca Ponchadas, 
// dicha promoción consiste en lo siguiente: Si se compran menos de cinco llantas el precio es de $300 cada una.
// si se compran de cinco a 10 el precio es de  $200 si se compran más de 10. Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.
#include <iostream>
using namespace std;
int main(){
int cantidad, precio;
cout << "Digite la cantidad de llantas que desea comprar: ";cin >> cantidad;
if (cantidad < 5){
precio = cantidad * 300;
cout << "El precio de cada llanta es de $300" << endl;
cout << "El precio total de las llantas es de $" << precio << endl;
}else if (cantidad >= 5 && cantidad <= 10){
precio = cantidad * 200;
cout << "El precio de cada llanta es de $200" << endl;
cout << "El precio total de las llantas es de $" << precio << endl;
}else if (cantidad > 10){
precio = cantidad * 150;
cout << "El precio de cada llanta es de $150" << endl;
cout << "El precio total de las llantas es de $" << precio << endl;
}
}
