#include <iostream>
#include <time.h>    // Para generar números aleatorios
#include <windows.h> // Para usar Sleep()
using namespace std;
void Ejercicio1()
{
    // Hacer un pseudocodigo que imprima los numeros del 1 al 100.
    int i = 1;
    while (i <= 100)
    {
        cout << i << endl;
        i++;
    }
}

void Ejercicio2()
{
    // Hacer un pseudocodigo que imprima los numeros del 100 al 0, en orden decreciente.
    int i = 100;
    while (i >= 0)
    {
        cout << i << endl;
        i--;
    }
}

void Ejercicio3()
{
    // Hacer un pseudocodigo que imprima los numeros pares entre 0 y 100.
    int i = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}

void Ejercicio4()
{
    // Hacer un programa que imprima la suma de los 100 primeros numeros.
    int i = 1, suma = 0;
    while (i <= 100)
    {
        suma = suma + i;
        i++;
    }
    cout << "La suma de los 100 primeros numeros es: " << suma << endl;
}

void Ejercicio5()
{
    // Hacer un pseudocódigo que imprima los numeros impares hasta el 100 y que imprima cuantos impares hay.
    int i = 1, contador = 0;
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            contador++;
        }
        i++;
    }
    cout << "Hay " << contador << " impares" << endl;
}

void Ejercicio6()
{
    // Hacer un pseudocodigo que imprima todos los numeros naturales que hay desde la unidad hasta un numero que introducimos por teclado.
    int numero;
    cout << "Introduzca un numero: ";
    cin >> numero;
    int i = 1;
    while (i <= numero)
    {
        cout << i << endl;
        i++;
    }
}

void Ejercicio7()
{
    // Introducir tantas frases como queramos y contarlas
    string frase;
    int contador = 0;
    cout << "Detener con ." << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << "Introduzca una frase: ";
        cin >> frase;
        if (frase == ".")
        {
            break;
        }
        contador++;
    }
    cout << "Hay " << contador << " frases" << endl;
}

void Ejercicio8()
{
    // Hacer un pseudocodigo que solo nos permita introducir S o N (mayusculas o minusculas)
    char letra;
    do
    {
        cout << "Introduzca S o N: ";
        cin >> letra;
    } while (letra != 'S' && letra != 'N' && letra != 's' && letra != 'n');
}

void Ejercicio9()
{
    // Introducir un numero por teclado. Que nos diga si es positivo o negativo.
    int numero;
    cout << "Introduzca un numero: ";
    cin >> numero;
    if (numero >= 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else
    {
        cout << "El numero es negativo" << endl;
    }
}

void Ejercicio11()
{
    // Imprimir y contar los multiplos de 3 desde la unidad hasta un numero que introducimos por teclado.
    int numero;
    cout << "Introduzca un numero: ";
    cin >> numero;
    int i = 1;
    int contador = 0;
    while (i <= numero)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
            contador++;
        }
        i++;
    }
    cout << "Hay " << contador << " multiplos de 3" << endl;
}

void Ejercicio12()
{
    // Hacer un pseudocodigo que imprima los numeros del 1 al 100. Que calcule la suma de todos los numeros pares por un lado, y por otro, la de todos los impares.
    int i = 1, sumaPares = 0, sumaImpares = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sumaPares = sumaPares + i;
        }
        else
        {
            sumaImpares = sumaImpares + i;
        }
        i++;
    }
    cout << "La suma de los pares es: " << sumaPares << endl;
    cout << "La suma de los impares es: " << sumaImpares << endl;
}

void Ejercicio13()
{
    // Imprimir y contar los numeros que son multiplos de 2 o de 3 que hay entre 1 y 100.
    int i = 1, contador = 0;
    while (i <= 100)
    {
        if (i % 2 == 0 || i % 3 == 0)
        {
            cout << i << endl;
            contador++;
        }
        i++;
    }
    cout << "Hay " << contador << " multiplos de 2 o de 3" << endl;
}

void Ejercicio14()
{
    // Hacer un pseudocodigo que imprima el mayor y el menor de una serie de cinco numeros que vamos introduciendo por teclado.
    int numero, mayor = 0, menor = 0;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Introduzca un numero: ";
        cin >> numero;
        if (i == 1)
        {
            mayor = numero;
            menor = numero;
        }
        else
        {
            if (numero > mayor)
            {
                mayor = numero;
            }
            if (numero < menor)
            {
                menor = numero;
            }
        }
    }
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
}
void Ejercicio15()
{
    // Introducir dos numeros por teclado. Imprimir los numeros naturales que hay entre ambos numeros empezando por el m s pequeño, contar cuantos hay y cuantos de ellos son pares. Calcular la suma de los impares.
    int numero1, numero2, contador = 0, contadorPares = 0, sumaImpares = 0;
    cout << "Introduzca un numero: ";
    cin >> numero1;
    cout << "Introduzca otro numero: ";
    cin >> numero2;
    if (numero1 < numero2)
    {
        for (int i = numero1; i <= numero2; i++)
        {
            cout << i << endl;
            contador++;
            if (i % 2 == 0)
            {
                contadorPares++;
            }
            else
            {
                sumaImpares = sumaImpares + i;
            }
        }
    }
    else
    {
        for (int i = numero2; i <= numero1; i++)
        {
            cout << i << endl;
            contador++;
            if (i % 2 == 0)
            {
                contadorPares++;
            }
            else
            {
                sumaImpares = sumaImpares + i;
            }
        }
    }
    cout << "Hay " << contador << " numeros" << endl;
    cout << "Hay " << contadorPares << " numeros pares" << endl;
    cout << "La suma de los impares es: " << sumaImpares << endl;
}
void Ejercicio16()
{
    // Imprimir diez veces la serie de numeros del 1 al 10.
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << endl;
        }
    }
}

void Ejercicio17()
{
    // Imprimir, contar y sumar los multiplos de 2 que hay entre una serie de numeros, tal que el segundo sea mayor o igual que el primero.
    int numero1, numero2, contador = 0, suma = 0;
    cout << "Introduzca un numero: ";
    cin >> numero1;
    cout << "Introduzca otro numero: ";
    cin >> numero2;
    if (numero1 < numero2)
    {
        for (int i = numero1; i <= numero2; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
                contador++;
                suma = suma + i;
            }
        }
    }
    else
    {
        for (int i = numero2; i <= numero1; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
                contador++;
                suma = suma + i;
            }
        }
    }
    cout << "Hay " << contador << " multiplos de 2" << endl;
    cout << "La suma de los multiplos de 2 es: " << suma << endl;
}
void Ejercicio18()
{
    // Hacer un pseudocodigo que cuente las veces que aparece una determinada letra en una frase que introduciremos por teclado.
    string frase;
    char letra;
    int contador = 0;
    cout << "Introduzca una frase: ";
    cin >> frase;
    cout << "Introduzca una letra: ";
    cin >> letra;
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] == letra)
        {
            contador++;
        }
    }
    cout << "La letra " << letra << " aparece " << contador << " veces" << endl;
}

void Ejercicio19()
{
    // Hacer un pseudocodigo que simule el funcionamiento de un reloj digital y que permita ponerlo en hora.
    int hora, minutos, segundos;
    cout << "Introduzca la hora: ";
    cin >> hora;
    cout << "Introduzca los minutos: ";
    cin >> minutos;
    cout << "Introduzca los segundos: ";
    cin >> segundos;
    while (true)
    {
        if (segundos == 60)
        {
            segundos = 0;
            minutos++;
        }
        if (minutos == 60)
        {
            minutos = 0;
            hora++;
        }
        if (hora == 24)
        {
            hora = 0;
        }
        cout << hora << ":" << minutos << ":" << segundos << endl;
        segundos++;
        Sleep(1000);
    }
}

void Ejercicio20()
{
    // Calcular el factorial de un numero, mediante subprogramas.
    int numero;
    cout << "Introduzca un numero: ";
    cin >> numero;
    for (int i = numero - 1; i >= 1; i--)
    {
        numero = numero * i;
    }
    cout << "El factorial es: " << numero << endl;
}

void Ejercicio21()
{
    // Hacer un programa que calcule independientemente la suma de los pares y los impares de los numeros entre 1 y 1000, utilizando un switch.
    int sumaPares = 0, sumaImpares = 0;
    for (int i = 1; i <= 1000; i++)
    {
        switch (i % 2)
        {
        case 0:
            sumaPares = sumaPares + i;
            break;
        case 1:
            sumaImpares = sumaImpares + i;
            break;
        }
    }
    cout << "La suma de los pares es: " << sumaPares << endl;
    cout << "La suma de los impares es: " << sumaImpares << endl;
}

void Ejercicio22()
{
    // Introducir una frase por teclado. Imprimirla cinco veces en filas consecutivas, pero cada impresion ir  desplazada cuatro columnas hacia la derecha.
    string frase;
    cout << "Introduzca una frase: ";
    cin >> frase;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " ";
        }
        cout << frase << endl;
    }
}
void Ejercicio23()
{
    // Hacer un pseudocodigo que imprima los n£meros del 0 al 100, controlando las filas y las columnas.
    for (int i = 0; i <= 100; i++)
    {
        cout << i << " ";
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
}
void Ejercicio24()
{
    // Comprobar si un numero mayor o igual que la unidad es primo.
    int numero, contador = 0;
    cout << "Introduzca un numero: ";
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        { // Si el numero es divisible entre i, contador aumenta en 1
            contador++;
        }
    }
    if (contador == 2)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }
}
void Ejercicio25()
{
    // Introducir un numero menor de 5000 y pasarlo a numero romano.
    int numero;
    cout << "Introduzca un numero menor de 5000: ";
    cin >> numero;
    if (numero < 5000)
    { // Comprobamos que el numero es menor de 5000
        while (numero >= 1000)
        { // Comprobamos si el numero es mayor o igual que 1000
            cout << "M";
            numero = numero - 1000;
        }
        while (numero >= 900)
        {
            cout << "CM";
            numero = numero - 900;
        }
        while (numero >= 500)
        {
            cout << "D";
            numero = numero - 500;
        }
        while (numero >= 400)
        {
            cout << "CD";
            numero = numero - 400;
        }
        while (numero >= 100)
        {
            cout << "C";
            numero = numero - 100;
        }
        while (numero >= 90)
        {
            cout << "XC";
            numero = numero - 90;
        }
        while (numero >= 50)
        {
            cout << "L";
            numero = numero - 50;
        }
        while (numero >= 40)
        {
            cout << "XL";
            numero = numero - 40;
        }
        while (numero >= 10)
        {
            cout << "X";
            numero = numero - 10;
        }
        while (numero >= 9)
        {
            cout << "IX";
            numero = numero - 9;
        }
        while (numero >= 5)
        {
            cout << "V";
            numero = numero - 5;
        }
        while (numero >= 4)
        {
            cout << "IV";
            numero = numero - 4;
        }
        while (numero >= 1)
        {
            cout << "I";
            numero = numero - 1;
        }
        cout << endl;
    }
    else
    {
        cout << "El numero es mayor de 5000" << endl;
    }
}
void Ejercicio26()
{
    // Introducir una frase por teclado. Imprimirla en el centro de la pantalla.
    string frase;
    cout << "Introduzca una frase: ";
    cin >> frase;
    for (int i = 0; i < 10; i++)
    {
        cout << " ";
    }
    cout << frase << endl;
}
void Ejercicio27()
{
    // Realizar la tabla de multiplicar de un numero entre 0 y 10.
    int numero;
    cout << "Introduzca un numero entre 0 y 10: ";
    cin >> numero;
    if (numero >= 0 && numero <= 10)
    {
        for (int i = 0; i <= 10; i++)
        {
            cout << numero << "x" << i << "=" << numero * i << endl;
        }
    }
    else
    {
        cout << "El numero no esta entre 0 y 10" << endl;
    }
}
void Ejercicio28()
{
    // Simular el lanzamiento de una moneda al aire e imprimir si ha salido cara o cruz.
    int numero;
    srand(time(NULL));   // Inicializamos la semilla del random
    numero = rand() % 2; // Generamos un numero aleatorio entre 0 y 1
    if (numero == 0)
    {
        cout << "Ha salido cara" << endl;
    }
    else
    {
        cout << "Ha salido cruz" << endl;
    }
}

void Ejercicio29()
{
    // Simular cien tiradas de dos dados y contar las veces que entre los dos suman 10.
    int contador = 0;
    srand(time(NULL)); // Inicializamos la semilla del random
    for (int i = 0; i < 100; i++)
    {
        int dado1 = rand() % 6 + 1; // Generamos un numero aleatorio entre 1 y 6
        int dado2 = rand() % 6 + 1;
        if (dado1 + dado2 == 10)
        {
            contador++;
        }
    }
    cout << "Entre los dos dados han salido 10 " << contador << " veces" << endl;
}
void Ejercicio30()
{
    // Simular una carrera de dos caballos si cada uno tiene igual probabilidad de ganar.
    int caballo1 = 0, caballo2 = 0;
    srand(time(NULL)); // Inicializamos la semilla del random
    while (caballo1 < 100 && caballo2 < 100)
    {
        int numero = rand() % 2; // Generamos un numero aleatorio entre 0 y 1
        if (numero == 0)
        {
            caballo1 = caballo1 + rand() % 10 + 1; // Generamos un numero aleatorio entre 1 y 10
        }
        else
        {
            caballo2 = caballo2 + rand() % 10 + 1;
        }
    }
    if (caballo1 > caballo2)
    {
        cout << "Ha ganado el caballo 1" << endl;
    }
    else
    {
        cout << "Ha ganado el caballo 2" << endl;
    }
}