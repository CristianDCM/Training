// El ej�rcito nacional ha decidido hacer una jornada de ventas de libretas militares para muchos hombres que no han definido su situaci�n militar u otros que no son aptos para prestar el servicio. Adem�s de la edad del joven, se tendr� en cuenta el nivel del Sisb�n  de la persona. Para todos los hombres mayores a 18 a�os la libreta tendr� un costo de 350000 pesos  pero para aquellos que tengan nivel 1 se le dar� un descuento del 40%; para los niveles 2 el descuento ser� del 30%; para nivel 3 del 15%; y para los dem�s estratos o niveles no habr� descuento. Para los j�venes con  los 18 a�os la libreta tiene un costo de 200000 pesos y los j�venes con nivel del Sisb�n 1, tendr�n un descuento del 60%; para los niveles 2, descuento del 40%,  para los de nivel 3, un descuento del 20% para los dem�s estratos no habr� descuento. Hacer un algoritmo que tome la edad y el nivel del Sisb�n de un hombre y nos muestre el descuento que le hace y su valor final a pagar.
#include "iostream"
using namespace std;
int main(){
    int edad, nivel;
    float descuento, valor;
    cout << "Ingrese la edad del joven: ";cin >> edad;
    cout << "Ingrese el nivel del Sisb�n: ";cin >> nivel;
    if (edad >= 18){
        valor = 350000;
        if (nivel == 1){
            descuento = 0.4;
        }else if (nivel == 2){
            descuento = 0.3;
        }else if (nivel == 3){
            descuento = 0.15;
        }else{
            descuento = 0;
        }
    }else{
        valor = 200000;
        if (nivel == 1){
            descuento = 0.6;
        }else if (nivel == 2){
            descuento = 0.4;
        }else if (nivel == 3){
            descuento = 0.2;
        }else{
            descuento = 0;
        }
    }
    cout << "El descuento es de: " << descuento * 100 << "%" << endl;
    cout << "El valor final a pagar es de: " << valor - (valor * descuento) << endl;
}
