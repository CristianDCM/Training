#include <iostream>
#include <locale.h>
using namespace std;
void txt(int n)
{
    line();
    switch (n){
    case 1:
        cout << "1.RUA que lea un numero e imprima por pantalla si el número es mayor, igual o menor de 0." << endl;break;
    case 2:
        cout << "2.RUA que lea un numero e imprima por pantalla si el número es par o impar." << endl;break;
    case 3:
        cout << "3.RUA que imprima los números del 100 al -2." << endl;break;
    case 4:
        cout << "4.RUA que imprima los números pares del 1 al 100." << endl;break;
    case 5:
        cout << "5.RUA que permita calcular el promedio de notas (notas finaliza cuando el usuario registre una nota = 0)." << endl;break;
    case 6:
        cout << "6.Imprimir y contar los múltiplos de 2 y de 3 que hay de 1 a 100." << endl;break;
    case 7:
        cout << "7.Determinar cuál de dos números es mayor." << endl;break;
    case 8:
        cout << "8.Determinar cuál de dos números es menor." << endl;break;
    case 9:
        cout << "9.RUA que sume los números del 20 al 50." << endl;break;
    case 10:
        cout << "10.RUA que sume 15 números cualesquiera y sume su resultado." << endl;break;
    case 11:
        cout << "11.RUA que lea la fecha de nacimiento y de una persona y diga si es mayor de edad." << endl;break;
    case 12:
        cout << "12.RUA que lea 3 números y lo ordene de mayor a menor." << endl;break;
    case 13:
        cout << "13.RUA que lea 3 números y lo ordene de menor a mayor." << endl;break;
    case 14:
        cout << "14.RUA que permita determinar el área y el volumen de un cilindro dado su radio (R) y su altura (H)." << endl;break;
    case 15:
        cout << "15.RUA que lea la velocidad de un vehículo expresado en Km por hora y proporcione la velocidad en metros por segundos." << endl;break;
    case 16:
        cout << "16.RUA que imprima cuantos números impares hay del 1 al 100." << endl;break;
    case 17:
        cout << "17.RUA que muestre la suma de los números impares del 1 al 100." << endl;break;
    case 18:
        cout << "18.RUA que muestre la suma de los números pares del 1 al 100." << endl;break;
    case 19:
        cout << "19.RUA que imprima el mayor y el menor de una serie de 5 números ingresados por teclado." << endl;break;
    case 20:
        cout << "20.RUA que calcule el factorial de un numero." << endl;break;
    case 21:
        cout << "21.RUA que lea un número del 1 al 10 y diga cuál es su número en romano." << endl;break;
    case 22:
        cout << "22.RUA que obtenga la última cifra de un número introducido por teclado." << endl;break;
    case 23:
        cout << "23.RUA que tras leer una medida expresada en centímetros la convierta en pulgadas 1 pulgada=2.54 cm." << endl;break;
    case 24:
        cout << "24.RUA que exprese las horas, minutos y segundos un tiempo expresado en minutos." << endl;break;
    case 25:
        cout << "25.RUA que dado un número del 1 al 12 muestre en pantalla en mes correspondiente del año." << endl;break;
    case 26:
        cout << "26.RUA que dado el mes, el día muestre el signo del zodiacal." << endl;break;
    case 27:
        cout << "27.RUA que calcule los números que hay desde 1 hasta un número introducido por teclado." << endl;break;
    case 28:
        cout << "28.RUA que calcule la suma de los números que hay desde 1 hasta un número introducido por teclado." << endl;break;
    case 29:
        cout << "29.RUA que calcule el residuo de la división de 1 hasta 10 de un numero dado." << endl;break;
    case 30:
        cout << "30.RUA que calcule el perímetro y área de un círculo dado su radio." << endl;break;
    case 31:
        cout << "31.Calcular el volumen de una esfera dado su radio." << endl;break;
    case 32:
        cout << "32.Dados los catetos de un triángulo rectángulo, calcular su hipotenusa." << endl;break;
    case 33:
        cout << "33.Escribir un programa que convierta un valor dado en grados Fahrenheit a grados Celsius. Recordar que la fórmula para la conversión es: F = 9/5C + 32." << endl;break;
    case 34:
        cout << "34.Escribir un programa que convierta un valor dado en grados Celsius a grados Fahrenheit. Recordar que la fórmula para la conversión es." << endl;break;
    case 35:
        cout << "35.RUA que lea 3 notas donde la primera nota equivale al 30%, la segunda al 30% y la tercera al 40% la nota va de (1 a 5)y calcule la nota final o definitiva." << endl;break;
    case 36:
        cout << "36.RUA que lea 4 notas donde la primera nota equivale al 20%, la segunda al 20%, la tercera al 10% y la cuarta al 50% la nota va de (1 a 5)y calcule la nota final o definitiva." << endl;break;
    case 37:
        cout << "37.Evaluar la función y=5/3x + 3/2x + 8 cuando x–> -5…20 (rango de -5 hasta 20)." << endl;break;
    case 38:
        cout << "38.Leer 3 edades, e imprimirlas junto con el promedio." << endl;break;
    case 39:
        cout << "39.RUA que lea 10 números e imprima solamente los positivos." << endl;break;
    case 40:
        cout << "40.En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público." << endl;break;
    case 41:
        cout << "41.Se tiene un grupo de N personas, para cada una de las cuales se ha elaborado una tarjeta de registro indicando el sexo y los puntos obtenidos en un examen. Se desea conocer con base en los promedios de los puntos obtenidos, cual sexo tuvo mejor desempeño." << endl;break;
    case 42:
        cout << "42.En un determinado peaje se desea saber cuántos carros particulares y cuántos buses pasaron en un día, lo mismo que el promedio de personas que viajan en carro particular y el promedio de personas que viajan en bus. Se debe tener en cuenta que por cada vehículo que pase, se debe indagar por el tipo de vehículo que es y el número de pasajeros que transporta. Nota: si es un carro particular se identifica con 1, si es bus se identifica con 2, otro tipo de transporte con 3. No se sabe con certeza cuántos carros pasarán en un día, pero al final del día se deben imprimir los datos buscados." << endl;break;
    case 43:
        cout << "43.Calcular el máximo común divisor de 2 números naturales, distintos de 0." << endl;break;
    case 44:
        cout << "44.RUA que convierta un valor dado en pesos a dólares." << endl;break;
    case 45:
        cout << "45.RUA que convierta un valor dado en dólares a pesos." << endl;break;
    case 46:
        cout << "46.RUA que calcule un valor dado en euros a dólares." << endl;break;
    case 47:
        cout << "47.RUA que calcule un valor dado en dólares a euros." << endl;break;
    case 48:
        cout << "48.RUA que lea dos deportes y muestre los implementos utilizados en cada deporte." << endl;break;
    case 49:
        cout << "49.RUA que lea un valor dado en libras y convertirlos a kilogramos ." << endl;break;
    case 50:
        cout << "50.Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora trabajada depende de su categoría: categoría pago x hora\nA = 26.90\nB = 24.30\nC = 21.5" << endl;break;
    }
}
