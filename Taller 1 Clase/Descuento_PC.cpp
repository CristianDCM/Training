//   Realizar un algoritmo En una fábrica de computadoras se planea ofrecer
//   a los clientes un descuento que dependerá del número de computadoras que
//   compre. Si las computadoras son menos de cinco se les dará un 10% de descuento
//   sobre el total de la compra; si el número de computadoras es mayor o igual
//   a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o más
//   se les da un 40% de descuento. El precio de cada computadora es de $11,000.
#include <iostream>
using namespace std;
int main(){
int computadoras;
float descuento, total;
cout << "Digite el numero de computadoras: ";cin >> computadoras;
if (computadoras < 5){
descuento = (computadoras*11000)*.10;
total = (computadoras*11000)-descuento;
cout << "El descuento es de: " << descuento << endl;
cout << "El total a pagar es de: " << total << endl;
}
else if (computadoras >= 5 && computadoras < 10){
descuento = (computadoras*11000)*.20;
total = (computadoras*11000)-descuento;
cout << "El descuento es de: " << descuento << endl;
cout << "El total a pagar es de: " << total << endl;
}
else if (computadoras >= 10){
descuento = (computadoras*11000)*.40;
total = (computadoras*11000)-descuento;
cout << "El descuento es de: " << descuento << endl;
cout << "El total a pagar es de: " << total << endl;
}
}
