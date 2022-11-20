Funcion Ascii
	Diseño
	Dimension X[10]
	X[1]="||          ___     _                    _        _                     ||"
	X[2]="||         | __|   (_)  ___   _ _   __  (_)  __  (_)  ___   ___         ||"
	X[3]="||         | _|    | | / -_) |  _| / _| | | / _| | | / _ \ (_-<         ||"
	X[4]="||         |___|  _/ | \___| |_|   \__| |_| \__| |_| \___/ /__/         ||"
	X[5]="||               |__/                                                   ||"
	Para img=1 Hasta 5 Con Paso 1 Hacer
		Escribir X[img]
	Fin Para
	Diseño
Fin Funcion
Funcion Asciix
	Diseño
	Dimension X[10]
	X[1]="||             .%%%%%%..%%%%%%..%%%%%%..%%%%%....%%%%...%%%%%%...%%%%...%%%%%%...%%%%....%%%%..             ||"
	X[2]="||             .%%..........%%..%%......%%..%%..%%..%%....%%....%%..%%....%%....%%..%%..%%.....             ||"
	X[3]="||             .%%%%........%%..%%%%....%%%%%...%%........%%....%%........%%....%%..%%...%%%%..             ||"
	X[4]="||             .%%......%%..%%..%%......%%..%%..%%..%%....%%....%%..%%....%%....%%..%%......%%.             ||"
	X[5]="||             .%%%%%%...%%%%...%%%%%%..%%..%%...%%%%...%%%%%%...%%%%...%%%%%%...%%%%....%%%%..             ||"
	Para img=1 Hasta 5 Con Paso 1 Hacer
		Escribir X[img]
	Fin Para
	Diseño
Fin Funcion
Funcion Ejer20
	Escribir "20. Desarrolle un algoritmo que permita calcular la media aritmética."
	Escribir "Digite la cantidad de numeros: "
	Leer N
	Para i<-1 Hasta N Hacer
		Escribir "Ingrese el Número"
		Leer Numerox
		Media = Media+Numerox
	Fin Para
	Escribir "La media aritmetica es: ", Media/N
Fin Funcion
Funcion Ejer19
	Escribir "19. Desarrolle un algoritmo que lea los primeros 300 números enteros y determine cuántos de ellos son impares; al final deberá indicar su sumatoria."
	Para i<-1 Hasta 300 Hacer
		Si i%2<>0 Entonces
			Escribir i
			Suma = Suma+i
		Fin Si
	Fin Para
	Escribir "Suma total: ",Suma
Fin Funcion
Funcion Ejer18
	Escribir "18. Desarrolle un algoritmo que le permita determinar de una lista de números:"
	Escribir "1. ¿Cuántos están entre el 50 y 75, ambos inclusive?"
	Escribir "2. ¿Cuántos mayores de 80?"
	Escribir "3. ¿Cuántos menores de 30?"
	Escribir "Ingrese un numero: "
	Leer N
	Mientras N<>0 Hacer
		Si N>=50 y N<=75 Entonces
			Contador=Contador+1
		Fin Si
		Si N>80 Entonces
			Contador1=Contador1+1
		FinSi
		Si N<30 Entonces
			Contador2=Contador2+1
		FinSi
		Escribir "Ingrese un numero: "
		Leer N
	Fin Mientras
	Escribir "Hay ", Contador, " numeros entre 50 y 75"
	Escribir "Hay ", Contador1, " numeros mayores a 80"
	Escribir "Hay ", Contador2, " numeros menores a 30"
Fin Funcion
Funcion Ejer17
	Escribir "17. Realice un algoritmo que determine el pago a realizar por la entrada a un espectáculo donde se pueden comprar sólo hasta cuatro entrada, donde al costo de dos entradas se les descuenta el 10%, al de tres entrada el 15% y a la compra de cuatro tickets se le descuenta el 20 %."
	Escribir "Digita el valor de la entrada"
	Leer valor_Entrada
	Escribir "Digita la cantidad de entradas"
	Leer cantidad_entrada
	Segun cantidad_entrada Hacer
		1:
			Escribir "El valor de la entrada es: $",valor_Entrada
		2:
			Escribir "El valor a pagar es: $", valor_entrada * cantidad_entrada * 0.9
			Escribir "Descuento del 10%"
		3:
			Escribir "El valor a pagar es: $", valor_entrada * cantidad_entrada * 0.85
			Escribir "Descuento del 15%"
		4:
			Escribir "El valor a pagar es: $", valor_entrada * cantidad_entrada * 0.8
			Escribir "Descuento del 20%"
		De Otro Modo:
			Escribir "No se pueden comprar mas de 4 entradas"
	Fin Segun
Fin Funcion
Funcion Ejer16
	Escribir "16. Determine el resultado del siguiente diagrama de flujo, realice el pseudocódigo. Elabore su enunciado."
	Escribir "Digite Numero: "
	Leer N
	C = N
	Mientras C >= 50000 Hacer
		BC = BC + 1
		C = C - 50000
	Fin Mientras
	Mientras C >= 20000 Hacer
		BV = BV + 1
		C = C - 20000
	Fin Mientras
	Mientras C >= 10000 Hacer
		BD = BD + 1
		C = C - 10000
	Fin Mientras
	Mientras C >= 5000 Hacer
		BC2 = BC2 + 1
		C = C - 5000
	Fin Mientras
	Mientras C >= 1000 Hacer
		BM = BM + 1
		C = C - 1000
	Fin Mientras
	Resto = C
	Escribir "50000: ", BC
	Escribir "20000: ", BV
	Escribir "10000: ", BD
	Escribir "5000: ", BC2
	Escribir "1000: ", BM
	Escribir "Resto: ", Resto
Fin Funcion
Funcion Ejer15
	Escribir "15. Desarrolle un algoritmo que permita determinar a partir de un número de días, ingresado por pantalla, ¿Cuántos años, meses, semanas y días; constituyen el número de días proporcionado utilizando la estructura Mientras o While."
	Escribir "Ingrese la cantidad de dias"
	Leer Dias
	Mientras Dias>365 Hacer
		Años = Años + 1
		Dias = Dias - 365
	Fin Mientras
	Mientras Dias>30
		Dias = Dias - 30
		Meses = Meses + 1
	Fin Mientras
	Mientras  Dias>7
		Semanas = Semanas + 1
		Dias = Dias - 7 
	Fin Mientras
	Escribir "Dias: ", Dias
	Escribir  "Semanas: ", Semanas
	Escribir "Meses: ", Meses
	Escribir "Años: ", Años
Fin Funcion
Funcion Ejer14
	Escribir "14. Desarrolle un algoritmo que funcione como caja registradora"
	Escribir "Nombre del Producto"
	Leer Name
	Escribir "Precio del Producto"
	Leer Precio
	Escribir "Cantidad del Producto"
	Leer Cant
	Subtotal = Cant * Precio
	Iva = Subtotal * 0.19
	Total = Subtotal + Iva
	Escribir "Nombre del Producto: ", Name
	Escribir "Subtotal: ", Subtotal
	Escribir "Iva: ", Iva
	Escribir "Total: ", Total
Fin Funcion
Funcion Ejer13
	Escribir "13. Desarrolle un algoritmo para la empresa Constructora Tecnovivir Casas C.A., que le permita calcular e imprimir la nómina para su cancelación a un total de 50 obreros calificados a quienes debe cancelar por horas trabajadas. La hora trabajada se pautó en 30.000 Bolívares."
	Obreros = 50
	Hora = 30000
	Para i Desde 1 Hasta Obreros Con Paso 1 Hacer
		Escribir "Ingrese las horas trabajadas por el obrero", i
		Leer Horas
		Escribir "El obrero ", i, " trabajó ", Horas, " horas y le corresponde un pago de ", Horas * Hora, " Bs."
	Fin Para
Fin Funcion
Funcion Ejer12
	Escribir "12. Desarrolle un algoritmo que permita calcular Promedio de Notas; finaliza cuando N = 0."
	Escribir "Notas: "
	Leer N
	Mientras N<>0 Hacer
		Suma = Suma + N
		Contador = Contador + 1
		Escribir "Notas: "
		Leer N
	Fin Mientras
	Promedio = Suma / Contador
	Escribir "El Promedio Es: ", Promedio
Fin Funcion
Funcion Ejer11
	Escribir "11. Realice un algoritmo que a partir de proporcionarle la velocidad de un automóvil, expresada en kilómetros por hora, proporcione la velocidad en metros por segundo."
	Escribir "Ingrese la velocidad del automovil en km/h: "
	Leer N
	Velocidad = N * 1000 / 3600
	Escribir "La velocidad del automovil es de: ", Velocidad " m/s"
Fin Funcion
Funcion Ejer10
	Escribir "10. Tanto el Pseudocódigo como el Diagrama de flujo presentan errores; encuéntrelos y corrijalos. Realice un algoritmo que calcule el monto a pagar por el servicio de estacionamiento, teniendo en cuenta que por la primera hora de estadía se tiene una tarifa de 1000 bolívares y las restantes tienen un costo de 600 bolívares."
	Escribir "Se tiene como datos: hora de entrada, hora de salida (formato militar), iniciada una hora se contabiliza como hora total."
	Escribir "Ejemplo: Entrada: 10:00 Salida: 12:00 Pago: 1600 bolívares"
	Escribir "Hora de Entrada: "
	Leer H_Entrada
	Escribir "Hora de Salida"
	Leer H_Salida
	Si H_Salida > H_Entrada Entonces
		Hora_Total <- H_Salida - H_Entrada
		Si Hora_Total == 1 Entonces
			Pago <- 1000
		SiNo
			Pago <- 1000 + (600*(Hora_Total - 1))
		Fin Si
	Fin Si
	Escribir "El Pago es de: $", Pago
Fin Funcion
Funcion Ejer9
	Escribir "9. Desarrolle un algoritmo que permita leer un valor entero positivo N y determinar si es primo o no."
	Escribir "Digite Numero: "
	Leer N
	Para i<- 1 Hasta N Hacer
		Si N%1=0 Entonces
			Contador <- Contador+1
		Fin Si
	FinPara
	Si Contador=2 Entonces
		Escribir Contador, " Es Numero Primo"
	SiNo
		Escribir Contador, " No Es Numero Primo"
	Fin Si
Fin Funcion

Funcion Ejer8
	Escribir "8. Desarrolle un algoritmo que permita leer dos números y ordenarlos de menor a mayor, si es el caso."
	Escribir "Numero 1: "
	Leer Num1
	Escribir "Numero 2: "
	Leer Num2
	Si Num1>Num2 Entonces
		Escribir Num2, " , ", Num1
	SiNo
		Escribir Num1, " , ", Num2
	Fin Si
Fin Funcion

Funcion Ejer7
	Escribir "7. Desarrolle un algoritmo que permita convertir calificaciones numéricas, según la siguiente tabla A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E = 1 hasta el 9. Se asume que la nota está comprendida entre 1 y 20."
	Escribir "Nota: "
	Leer N
	Si N>= 19 y N<=20 Entonces
		Escribir  "A"
	SiNo
		Si N>= 16 y N<=18 Entonces
			Escribir  "B" 
		SiNo
			Si N>= 13 y N<=15 Entonces
				Escribir  "C" 
			SiNo
				Si N>= 10 y N<=12 Entonces
					Escribir  "D" 
				SiNo
					Si N>= 1 y N<=9 Entonces
						Escribir  "E" 
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
Fin Funcion

Funcion Ejer6
	Escribir "6. Desarrolle un algoritmo que permita leer un valor cualquiera N y escriba si dicho número es par o impar."
	Escribir "Digite Numero"
	Leer N
	Si N%2=0 Entonces
		Escribir N, " Numero Par"
	SiNo
		Escribir N, " Numero Impar"
	Fin Si
Fin Funcion

Funcion Ejer5
	Escribir "5. Desarrolle un algoritmo que permita determinar el área y volumen de un cilindro dado su radio (R) yaltura (H)."
	Escribir "Radio: "
	Leer R
	Escribir "Altura: "
	Leer H
	Area = 3.1416*R*R
	Volumen = Area*H
	Escribir "El Area Es: ", Area
	Escribir "El Volumen Es: ", Volumen
Fin Funcion

Funcion Ejer4
	Escribir "4. Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. Desarrolle el algoritmo correspondiente."
	Escribir "Cateto A: "
	Leer CatA
	Escribir "Cateto B: "
	Leer CatB
	Hipotenusa = RC(CatA*CatA + CatB*CatB)
	Escribir "La Hipotenusa es:", Hipotenusa
Fin Funcion

Funcion Ejer3
	Escribir "3. Desarrolle un algoritmo que realice la sumatoria de los números enteros comprendidos entre el 1 y el 10, es decir, 1 + 2 + 3 + ?. + 10."
	Para N<-N+1 Hasta 10 Hacer
		Suma = Suma + N
	Fin Para
	Escribir "La Suma Es ", Suma
Fin Funcion

Funcion Ejer2
	Escribir "2. Desarrolle un algoritmo que permita leer tres valores y almacenarlos en las variables A, B y C Respectivamente. El algoritmo debe imprimir cual es el mayor y cual es el menor. Recuerde constatar que los tres valores introducidos por el teclado sean valores distintos. Presente un mensaje de alerta en caso de que se detecte la introducción de valores iguales."
	Escribir "Digite 3 Numeros"
	Leer A
	Leer B
	Leer C
	Si A>B y A>C Entonces
		Escribir "El Numero ", A " Es Mayor"
	SiNo 
		Si B>A y B>C Entonces
			Escribir "El Numero ", B " Es Mayor"
		SiNo
			Escribir "El Numero ", C " Es Mayor"
		Fin Si
	Fin Si
Fin Funcion

Funcion Ejer1
	Escribir "1. Determinar cual es el numero mayor de 2 variables"
	Escribir "Digite 2 Números"
	Leer Num1
	Leer Num2
	Si Num1==Num2 Entonces
		Escribir "Porfavor Digite Numeros Distintos"
	Fin Si
	Si Num1>Num2 Entonces
		Escribir "El Numero ", Num1 " Es Mayor"
	SiNo
		Escribir "El Numero ", Num2 " Es Mayor"
	Fin Si
Fin Funcion

Funcion Diseño
	Para i<-1 Hasta 110 Hacer
		Escribir Sin Saltar "="
	Fin Para
	Escribir ""
Fin Funcion

Algoritmo Ejercicios
	Asciix
	Repetir
		Escribir "Digite el Número del Ejercicio:"
		Leer Opc
		Segun Opc Hacer
			1:
				Diseño
				Ejer1
				Diseño
			2:
				Diseño
				Ejer2
				Diseño
			3:
				Diseño
				Ejer3
				Diseño
			4:
				Diseño
				Ejer4
				Diseño
			5:
				Diseño
				Ejer5
				Diseño
			6:
				Diseño
				Ejer6
				Diseño
			7: 
				Diseño
				Ejer7
				Diseño
			8:
				Diseño
				Ejer8
				Diseño
			9: 
				Diseño
				Ejer9
				Diseño
			10:
				Diseño
				Ejer10
				Diseño
			11:
				Diseño
				Ejer11
				Diseño
			12:
				Diseño
				Ejer12
				Diseño
			13:
				Diseño
				Ejer13
				Diseño
			14:
				Diseño
				Ejer14
				Diseño
			15:
				Diseño
				Ejer15
				Diseño
			16:
				Diseño
				Ejer16
				Diseño
			17:
				Diseño
				Ejer17
				Diseño
			18:
				Diseño
				Ejer18
				Diseño
			19:
				Diseño
				Ejer19
				Diseño
			20:
				Diseño
				Ejer20
				Diseño
			De Otro Modo:
				Diseño
				Escribir "Digite una opcion valida"
				Diseño
		Fin Segun
	Hasta Que Bucle=1
FinAlgoritmo
