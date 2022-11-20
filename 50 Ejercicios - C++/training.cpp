#include <iostream>
#include <math.h>
#include <locale.h> 
using namespace std;

void ejercicio1(){
//RUA que lea un numero e imprima por pantalla si el número es mayor, igual o menor de 0.
int numero;
cout << "Digite un número: ";cin >> numero;
if (numero > 0){
cout << "El número es mayor que 0" << endl;
}else if (numero == 0){
cout << "El número es igual a 0" << endl;
}else{
cout << "El número es menor que 0" << endl;
printf(" ");
}
}
 
void ejercicio2(){
//RUA que lea un numero e imprima por pantalla si el número es par o impar.
int numero;
cout << "Digite un numero: ";cin >> numero;
if (numero % 2 == 0){
cout << "El numero es par" << endl;
}else{
cout << "El numero es impar" << endl;
}
}
 
void ejercicio3(){
//RUA que imprima los números del 100 al -2. sin buclear 
for (int i = 100; i >= -2; i--){
cout << i << endl;
}
}
 
void ejercicio4(){
//RUA que imprima los números pares del 1 al 100
for (int i = 1; i <= 100; i++){
    if (i % 2 == 0){
        cout << i << endl;
    }
}
}
 
void ejercicio5(){
//RUA que permita calcular el promedio de notas (notas finaliza cuando el usuario registre una nota = 0).
float nota, suma = 0, promedio;
int contador = 0;
do{
    cout << "Digite una nota: ";cin >> nota;
    suma += nota;
    contador++;
}while(nota != 0);
promedio = suma / contador;
cout << "El promedio es: " << promedio << endl;
}
 
void ejercicio6(){
//Imprimir y contar los múltiplos de 2 y de 3 que hay de 1 a 100
int contador2 = 0, contador3 = 0;
for (int i = 1; i <= 100; i++){
    if (i % 2 == 0){
        cout << i << " es multiplo de 2" << endl;
        contador2++;
    }
    if (i % 3 == 0){
        cout << i << " es multiplo de 3" << endl;
        contador3++;
    }
}
}
 
void ejercicio7(){
//Determinar cuál de dos números es mayor.
int numero1, numero2;
cout << "Digite un numero: ";cin >> numero1;
cout << "Digite otro numero: ";cin >> numero2;
if (numero1 > numero2){
    cout << "El numero " << numero1 << " es mayor que " << numero2 << endl;
}else if (numero1 == numero2){
    cout << "Los numeros son iguales" << endl;
}else{
    cout << "El numero " << numero2 << " es mayor que " << numero1 << endl;
}
}
 
void ejercicio8(){
//Determinar cuál de dos números es menor
int numero1, numero2;
cout << "Digite un numero: ";cin >> numero1;
cout << "Digite otro numero: ";cin >> numero2;
if (numero1 < numero2){
    cout << "El numero " << numero1 << " es menor que " << numero2 << endl;
}else if (numero1 == numero2){
    cout << "Los numeros son iguales" << endl;
}else{
    cout << "El numero " << numero2 << " es menor que " << numero1 << endl;
}
}
 
void ejercicio9(){
//RUA que sume los números del 20 al 50
int suma = 0;
for (int i = 20; i <= 50; i++){
    suma += i;
}
cout << "La suma es: " << suma << endl;
}
 
void ejercicio10(){
//RUA que sume 15 números cualesquiera y sume su resultado.
int suma = 0, numero;
for (int i = 1; i <= 15; i++){
    cout << "Digite un el numero " << i << ": ";cin >> numero;
    suma += numero;
}
cout << "La suma es: " << suma << endl;
}
 
void ejercicio11(){
//RUA que lea la fecha de nacimiento de una persona y diga si es mayor de edad.
int anio;
cout << "Digite su año de nacimiento: ";cin >> anio;
if (2022 - anio >= 18){
    cout << "Es mayor de edad" << endl;
}else{
    cout << "Es menor de edad" << endl;
}
}
 
void ejercicio12(){
//RUA que lea 3 números y lo ordene de mayor a menor
int numero1, numero2, numero3;
cout << "Digite un numero: ";cin >> numero1;
cout << "Digite otro numero: ";cin >> numero2;
cout << "Digite otro numero: ";cin >> numero3;
if (numero1 > numero2 && numero1 > numero3){
    if (numero2 > numero3){
        cout << numero1 << " " << numero2 << " " << numero3 << endl;
    }else{
        cout << numero1 << " " << numero3 << " " << numero2 << endl;
    }
}else if (numero2 > numero1 && numero2 > numero3){
    if (numero1 > numero3){
        cout << numero2 << " " << numero1 << " " << numero3 << endl;
    }else{
        cout << numero2 << " " << numero3 << " " << numero1 << endl;
    }
}else if (numero3 > numero1 && numero3 > numero2){
    if (numero1 > numero2){
        cout << numero3 << " " << numero1 << " " << numero2 << endl;
    }else{
        cout << numero3 << " " << numero2 << " " << numero1 << endl;
    }
}
}
 
void ejercicio13(){
//RUA que lea 3 números y lo ordene de menor a mayor
int numero1, numero2, numero3;
cout << "Digite un numero: ";cin >> numero1;
cout << "Digite otro numero: ";cin >> numero2;
cout << "Digite otro numero: ";cin >> numero3;
if (numero1 < numero2 && numero1 < numero3){
    if (numero2 < numero3){
        cout << numero1 << " " << numero2 << " " << numero3 << endl;
    }else{
        cout << numero1 << " " << numero3 << " " << numero2 << endl;
    }
}else if (numero2 < numero1 && numero2 < numero3){
    if (numero1 < numero3){
        cout << numero2 << " " << numero1 << " " << numero3 << endl;
    }else{
        cout << numero2 << " " << numero3 << " " << numero1 << endl;
    }
}else if (numero3 < numero1 && numero3 < numero2){
    if (numero1 < numero2){
        cout << numero3 << " " << numero1 << " " << numero2 << endl;
    }else{
        cout << numero3 << " " << numero2 << " " << numero1 << endl;
    }
}
}
 
void ejercicio14(){
//RUA que permita determinar el area y el volumen de un cilindro dado su radio (R) y su altura (H)
float radio, altura, area, volumen;
cout << "Digite el radio: ";cin >> radio;
cout << "Digite la altura: ";cin >> altura;
area = 2 * 3.1416 * radio * (radio + altura);
volumen = 3.1416 * radio * radio * altura;
cout << "El area es: " << area << endl;
cout << "El volumen es: " << volumen << endl;
}
 
void ejercicio15(){
//RUA que lea la velocidad de un veh�culo expresado en Km por hora y proporcione la velocidad en metros por segundos
float velocidad;
cout << "Digite la velocidad en Km/h: ";cin >> velocidad;
cout << "La velocidad en m/s es: " << velocidad / 3.6 << endl;
}
 
void ejercicio16(){
//RUA que imprima cuantos números impares hay del 1 al 100
int contador = 0;
for (int i = 1; i <= 100; i++){
    if (i % 2 != 0){
        contador++;
        cout << i << " ";
    }
}
cout << endl << "Hay " << contador << " numeros impares" << endl;
}

void ejercicio17(){
//RUA que muestre la suma de los números impares del 1 al 100.
int suma = 0;
for (int i = 1; i <= 100; i++){
    if (i % 2 != 0){
        suma += i;
    }
}
cout << "La suma es: " << suma << endl;
}
 
void ejercicio18(){
//RUA que muestre la suma de los números pares del 1 al 100.
int suma = 0;
for (int i = 1; i <= 100; i++){
    if (i % 2 == 0){
        suma += i;
    }
}
cout << "La suma es: " << suma << endl;
}
 
void ejercicio19(){
//RUA que imprima el mayor y el menor de una serie de 5 números ingresados por teclado
int numero, mayor, menor;
cout << "Digite un numero: ";cin >> numero;
mayor = numero;
menor = numero;
for (int i = 1; i < 5; i++){
    cout << "Digite otro numero: ";cin >> numero;
    if (numero > mayor){
        mayor = numero;
    }
    if (numero < menor){
        menor = numero;
    }
}
cout << "El mayor es: " << mayor << endl;
cout << "El menor es: " << menor << endl;
}
 
void ejercicio20(){
//RUA que calcule el factorial de un numero
int numero, factorial = 1;
cout << "Digite un numero: ";cin >> numero;
for (int i = 1; i <= numero; i++){
    factorial *= i;
}
cout << "El factorial es: " << factorial << endl;
}
 
void ejercicio21(){
//RUA que lea un número del 1 al 10 y diga cuál es su número en romano.
int numero;
cout << "Digite un numero del 1 al 10: ";cin >> numero;
switch (numero){
    case 1:
        cout << "I" << endl;
        break;
    case 2:
        cout << "II" << endl;
        break;
    case 3:
        cout << "III" << endl;
        break;
    case 4:
        cout << "IV" << endl;
        break;
    case 5:
        cout << "V" << endl;
        break;
    case 6:
        cout << "VI" << endl;
        break;
    case 7:
        cout << "VII" << endl;
        break;
    case 8:
        cout << "VIII" << endl;
        break;
    case 9:
        cout << "IX" << endl;
        break;
    case 10:
        cout << "X" << endl;
        break;
    default:
        cout << "Numero no valido" << endl;
        break;
}
}
 
void ejercicio22(){
//RUA que obtenga la ultima cifra de un número introducido.                             
int numero;
cout << "Digite un numero: ";cin >> numero;
cout << "La ultima cifra es: " << numero % 10 << endl;
}
 
void ejercicio23(){
//RUA que tras leer una medida expresada en cent�metros la convierta en pulgadas 1 pulgada=2.54 cm.
float medida;
cout << "Digite una medida en cm: ";cin >> medida;
cout << "La medida en pulgadas es: " << medida / 2.54 << endl;
}
 
void ejercicio24(){
//RUA que exprese las horas, minutos y segundos un tiempo expresado en minutos.
int minutos, horas, segundos;
cout << "Digite los minutos: ";cin >> minutos;
horas = minutos / 60;
minutos = minutos % 60;
segundos = minutos * 60;
cout << "Horas: " << horas << endl;
cout << "Minutos: " << minutos << endl;
cout << "Segundos: " << segundos << endl;
}
 
void ejercicio25(){
//RUA que dado un número del 1 al 12 muestre en pantalla en mes correspondiente del a�o.
int numero;
cout << "Digite un numero del 1 al 12: ";cin >> numero;
switch (numero){
    case 1:
        cout << "Enero" << endl;
        break;
    case 2:
        cout << "Febrero" << endl;
        break;
    case 3:
        cout << "Marzo" << endl;
        break;
    case 4:
        cout << "Abril" << endl;
        break;
    case 5:
        cout << "Mayo" << endl;
        break;
    case 6:
        cout << "Junio" << endl;
        break;
    case 7:
        cout << "Julio" << endl;
        break;
    case 8:
        cout << "Agosto" << endl;
        break;
    case 9:
        cout << "Septiembre" << endl;
        break;
    case 10:
        cout << "Octubre" << endl;
        break;
    case 11:
        cout << "Noviembre" << endl;
        break;
    case 12:
        cout << "Diciembre" << endl;
        break;
    default:
        cout << "Numero no valido" << endl;
        break;
}
}
 
void ejercicio26(){
// RUA que dado el mes, el día muestre el signo del zodiacal.
int dia, mes;
cout << "Digite el dia: ";cin >> dia;
cout << "Digite el mes: ";cin >> mes;
switch (mes){
    case 1:
        if (dia >= 21){
            cout << "Acuario" << endl;
        }else{
            cout << "Capricornio" << endl;
        }
        break;
    case 2:
        if (dia >= 20){
            cout << "Piscis" << endl;
        }else{
            cout << "Acuario" << endl;
        }
        break;
    case 3:
        if (dia >= 21){
            cout << "Aries" << endl;
        }else{
            cout << "Piscis" << endl;
        }
        break;
    case 4:
        if (dia >= 21){
            cout << "Tauro" << endl;
        }else{
            cout << "Aries" << endl;
        }
        break;
    case 5:
        if (dia >= 21){
            cout << "Geminis" << endl;
        }else{
            cout << "Tauro" << endl;
        }
        break;
    case 6:
        if (dia >= 22){
            cout << "Cancer" << endl;
        }else{
            cout << "Geminis" << endl;
        }
        break;
    case 7:
        if (dia >= 23){
            cout << "Leo" << endl;
        }else
            cout << "Cancer" << endl;
        break;
    case 8:
        if (dia >= 23){
            cout << "Virgo" << endl;
        }else{
            cout << "Leo" << endl;
        }
        break;
    case 9:
        if (dia >= 23){
            cout << "Libra" << endl;
        }else{
            cout << "Virgo" << endl;
        }
        break;
    case 10:
        if (dia >= 23){
            cout << "Escorpio" << endl;
        }else{
            cout << "Libra" << endl;
        }
        break;
    case 11:
        if (dia >= 23){
            cout << "Sagitario" << endl;
        }else{
            cout << "Escorpio" << endl;
        }
        break;
    case 12:
        if (dia >= 22){
            cout << "Capricornio" << endl;
        }else{
            cout << "Sagitario" << endl;
        }
        break;
    default:
        cout << "Numero no valido" << endl;
        break;
}
}
 
void ejercicio27(){
//RUA que calcule los números que hay desde 1 hasta un número introducido por teclado.
int numero;
cout << "Digite un numero: ";cin >> numero;
for (int i = 1; i <= numero; i++){
    cout << i << endl;
}
}
 
void ejercicio28(){
//RUA que calcule la suma de los números que hay desde 1 hasta un número introducido por teclado.
int numero, suma = 0;
cout << "Digite un numero: ";cin >> numero;
for (int i = 1; i <= numero; i++){
    suma += i;
}
cout << "La suma es: " << suma << endl;
}
 
void ejercicio29(){
//RUA que calcule el residuo de la división de 1 hasta 10 de un numero dado.
int numero;
cout << "Digite un numero: ";cin >> numero;
for (int i = 1; i <= 10; i++){
    cout << numero << " % " << i << " = " << numero % i << endl;
}
}
 
void ejercicio30(){
//RUA que calcule el per�metro y �rea de un c�rculo dado su radio.
float radio, perimetro, area;
cout << "Digite el radio: ";cin >> radio;
perimetro = 2 * 3.1416 * radio;
area = 3.1416 * (radio * radio);
cout << "Perimetro: " << perimetro << endl;
cout << "Area: " << area << endl;
}
 
void ejercicio31(){
//Calcular el volumen de una esfera dado su radio.
float radio, volumen;
cout << "Digite el radio: ";cin >> radio;
volumen = (4 * 3.1416 * (radio * radio * radio)) / 3;
cout << "Volumen: " << volumen << endl;
}

void ejercicio32(){
// Dados los catetos de un triángulo rectángulo, calcular su hipotenusa.
float cateto1, cateto2, hipotenusa;
cout << "Digite el cateto 1: ";cin >> cateto1;
cout << "Digite el cateto 2: ";cin >> cateto2;
hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
cout << "Hipotenusa: " << hipotenusa << endl;
}

void ejercicio33(){
//  Escribir un programa que convierta un valor dado en grados Fahrenheit a grados 
// Celsius. Recordar que la fórmula para la conversión es: F = 9/5C + 32
float fahrenheit, celsius;
cout << "Digite los grados fahrenheit: ";cin >> fahrenheit;
celsius = (fahrenheit - 32) * 5 / 9;
cout << "Grados celsius: " << celsius << endl;
}

void ejercicio34(){
//Escribir un programa que convierta un valor dado en grados Celsius a grados       
// Fahrenheit. Recordar que la fórmula para la conversión es
float fahrenheit, celsius;
cout << "Digite los grados celsius: ";cin >> celsius;
fahrenheit = (celsius * 9 / 5) + 32;
cout << "Grados fahrenheit: " << fahrenheit << endl;
}

void ejercicio35(){
//RUA que lea 3 notas donde la primera nota equivale al 30%, la segunda al 30% y la tercera 
// al 40% la nota va de (1 a 5)y calcule la nota final o definitiva.
float nota1, nota2, nota3, notaFinal;
cout << "Digite la nota 1: ";cin >> nota1;
cout << "Digite la nota 2: ";cin >> nota2;
cout << "Digite la nota 3: ";cin >> nota3;
notaFinal = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4);
cout << "Nota final: " << notaFinal << endl;
}

void ejercicio36(){
//RUA que lea 4 notas donde la primera nota equivale al 20%, la segunda al 20%, la tercera 
// al 10% y la cuarta al 50% la nota va de (1 a 5)y calcule la nota final o definitiva.
float nota1, nota2, nota3, nota4, notaFinal;
cout << "Digite la nota 1: ";cin >> nota1;
cout << "Digite la nota 2: ";cin >> nota2;
cout << "Digite la nota 3: ";cin >> nota3;
cout << "Digite la nota 4: ";cin >> nota4;
notaFinal = (nota1 * 0.2) + (nota2 * 0.2) + (nota3 * 0.1) + (nota4 * 0.5);
cout << "Nota final: " << notaFinal << endl;
}

void ejercicio37(){
//Evaluar la función y=5/3x + 3/2x + 8 cuando x–> -5…20 (rango de -5 hasta 20)
float x, y;
for (int i = -5; i <= 20; i++){
    x = i;
    y = (5 / (3 * x)) + (3 / (2 * x)) + 8;
    cout << "x: " << x << " y: " << y << endl;
}
}

void ejercicio38(){
//Leer 3 edades, e imprimirlas junto con el promedio
float edad1, edad2, edad3, promedio;
cout << "Digite la edad 1: ";cin >> edad1;
cout << "Digite la edad 2: ";cin >> edad2;
cout << "Digite la edad 3: ";cin >> edad3;
promedio = (edad1 + edad2 + edad3) / 3;
cout << "Edad 1: " << edad1 << endl;
cout << "Edad 2: " << edad2 << endl;
cout << "Edad 3: " << edad3 << endl;
cout << "Promedio: " << promedio << endl;
}

void ejercicio39(){
//RUA que lea 10 números e imprima solamente los positivos.
int numero;
for (int i = 1; i <= 10; i++){
    cout << "Digite el numero " << i << ": ";cin >> numero;
    if (numero > 0){
        cout << "Numero positivo: " << numero << endl;
    }
}
}

void ejercicio40(){
//En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les 
// gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público.
int rojo = 0, verde = 0, azul = 0, total;
string color;
for (int i = 1; i <= 10; i++){
    cout << i << ". Digite el color que le gusta mas: ";cin >> color;
    if (color == "rojo"){
        rojo++;
    }else if (color == "verde"){
        verde++;
    }else if (color == "azul"){
        azul++;
    }
}
total = rojo + verde + azul;
cout << "Rojo: " << (rojo * 100) / total << "%" << endl;
cout << "Verde: " << (verde * 100) / total << "%" << endl;
cout << "Azul: " << (azul * 100) / total << "%" << endl;
}

void ejercicio41(){
// Se tiene un grupo de N personas, para cada una de las cuales se ha elaborado una tarjeta 
// de registro indicando el sexo y los puntos obtenidos en un examen. Se desea conocer con 
// base en los promedios de los puntos obtenidos, cual sexo tuvo mejor desempeño.
int n, puntos, puntosHombres = 0, puntosMujeres = 0, hombres = 0, mujeres = 0;
string sexo;
cout << "Digite el numero de personas: ";cin >> n;
for (int i = 1; i <= n; i++){
    cout << i <<". Digite el sexo de la persona (hombre, mujer): ";cin >> sexo;
    cout << "Digite los puntos de la persona " << i << ": ";cin >> puntos;
    if (sexo == "hombre"){
        puntosHombres += puntos;
        hombres++;
    }else if (sexo == "mujer"){
        puntosMujeres += puntos;
        mujeres++;
    }
}
cout << "Promedio de puntos de los hombres: " << puntosHombres / hombres << endl;
cout << "Promedio de puntos de las mujeres: " << puntosMujeres / mujeres << endl;
}

void ejercicio42(){
// En un determinado peaje se desea saber cuántos carros particulares y cuántos buses pasaron 
// en un día, lo mismo que el promedio de personas que viajan en carro particular y el promedio 
// de personas que viajan en bus. Se debe tener en cuenta que por cada vehículo que pase, se 
// debe indagar por el tipo de vehículo que es y el número de pasajeros que transporta. 
int n, pasajeros, carros = 0, buses = 0, pasajerosCarros = 0, pasajerosBuses = 0;
string tipoVehiculo;
cout << "Digite el numero de vehiculos: ";cin >> n;
for (int i = 1; i <= n; i++){
    cout << i << ". Digite el tipo de vehiculo (carro, bus): ";cin >> tipoVehiculo;
    cout << "Digite el numero de pasajeros del vehiculo " << i << ": ";cin >> pasajeros;
    if (tipoVehiculo == "carro"){
        carros++;
        pasajerosCarros += pasajeros;
    }else if (tipoVehiculo == "bus"){
        buses++;
        pasajerosBuses += pasajeros;
    }
}
cout << "Carros: " << carros << endl;
cout << "Buses: " << buses << endl;
cout << "Promedio de pasajeros de los carros: " << pasajerosCarros / carros << endl;
cout << "Promedio de pasajeros de los buses: " << pasajerosBuses / buses << endl;
}

void ejercicio43(){
// Calcular el máximo común divisor de 2 números naturales, distintos de 0.
int a, b, mcd;
cout << "Digite el numero a: ";cin >> a;
cout << "Digite el numero b: ";cin >> b;
for (int i = 1; i <= a; i++){
    if (a % i == 0 && b % i == 0){
        mcd = i;
    }
}
cout << "MCD: " << mcd << endl;
}

void ejercicio44(){
// RUA que convierta un valor dado en pesos a dólares
// Peso colombiano=0,00020 (18/11/2022)
float pesos, dolares;
cout << "= Pesos Colombianos ="<<endl;
cout << "Digite el valor en pesos: ";cin >> pesos;
dolares = pesos * 0.00020;
cout << "Valor en dolares:" << dolares << endl;
}

void ejercicio45(){
// RUA que convierta un valor dado en dólares a pesos
//Dolar = 5008,96 (18/11/2022)
float dolares, pesos;
cout << "= Dolares a Pesos Colombianos ="<<endl;
cout << "Digite el valor en dolares: ";cin >> dolares;
pesos = dolares * 5008.96;
cout << "Valor en pesos:" << pesos << endl;
}

void ejercicio46(){
//RUA que calcule un valor dado en euros a dólares
//Euro = 0,9666 (18/11/2022)
float euros, dolares;
cout << "Digite el valor en euros: ";cin >> euros;
dolares = euros * 0.9666;
cout << "Valor en dolares:" << dolares << endl;
}

void ejercicio47(){
//RUA que calcule un valor dado en dólares a euros
//Dolar = 1,0344 (18/11/2022)
float dolares, euros;
cout << "Digite el valor en dolares: ";cin >> dolares;
euros = dolares * 1.0344;
cout << "Valor en euros:" << euros << endl;
}

void ejercicio48(){
// RUA que lea dos deportes y muestre los implementos utilizados en cada deporte
string deporte1, deporte2;
cout << "futbol - tenis - baloncesto"<< endl;
cout << "Digite el primer deporte: ";cin >> deporte1;
cout << "Digite el segundo deporte: ";cin >> deporte2;
if (deporte1 == "futbol"){
    cout << "Balon, porterias, jugadores" << endl;
}else if (deporte1 == "tenis"){
    cout << "Raqueta, pelota" << endl;
}else if (deporte1 == "baloncesto"){
    cout << "Balon, canasta, jugadores" << endl;
}
if (deporte2 == "futbol"){
    cout << "Balon, porterias, jugadores" << endl;
}else if (deporte2 == "tenis"){
    cout << "Raqueta, pelota" << endl;
}else if (deporte2 == "baloncesto"){
    cout << "Balon, canasta, jugadores" << endl;
}
}

void ejercicio49(){
//RUA que lea un valor dado en libras y convertirlos a kilogramos 
//Libra = 0,453592
float libras, kilogramos;
cout << "Digite el valor en libras: ";cin >> libras;
kilogramos = libras * 0.453592;
cout << "Valor en kilogramos:" << kilogramos << endl;
}

void ejercicio50(){
//Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora 
// trabajada depende de su categoría:
// categoría pago x hora
//  A 26.90 
//  B 24.30 
//  C 21.50
string categoria;
float horas, sueldo;
cout << "Digite la categoria: ";cin >> categoria;
cout << "Digite las horas trabajadas: ";cin >> horas;
if (categoria == "A" || categoria == "a"){
    sueldo = horas * 26.90;
}else if (categoria == "B" || categoria == "b"){
    sueldo = horas * 24.30;
}else if (categoria == "C" || categoria == "c"){
    sueldo = horas * 21.50;
}
cout << "Sueldo: " << sueldo << endl;
}
