// LAB 3 
// Este programa genera 3 números enteros aleatorios entre 0-100
// y luego los organiza de mayor a menor

// Autor: Jean-Pierre Bernal
// # estudiante: 401-02-0768
// Prof: Lilian Gonzalez Albino
// Clase: CCOM-3033-002
// Fecha: 9 de septiembre, 2025
// Referencias: libro de texto “Starting Out with C++”, 8th ed.

#include <iostream>
using namespace std;

// libreria usada para generar números aleatorios
#include <cstdlib> 

int main ()
{
	// inicializa generador de números aleatorios
	srand(time(0)); 
	
	// genera # aleatorio dentro de un rango
	int aleatorio_x = rand() % (100 - 0 + 1) + 0; 
	int aleatorio_y = rand() % (100 - 0 + 1) + 0;
	int aleatorio_z = rand() % (100 - 0 + 1) + 0;
	int mayor, medio, menor; 
	
	cout << "Este programa genera 3 números enteros aleatorios entre 0-100 y luego los " << endl;
	cout << "ordena de mayor a menor: " << endl;
	cout << " " << endl;
	
	// muestra en pantalla los 3 numeros aleatorios
	cout << aleatorio_x << " " << aleatorio_y << " " << aleatorio_z << endl;
	cout << " " << endl;
	
	// estos 'if' hacen una comparación relacional y conjunción logica 'AND'
	if (aleatorio_z <= aleatorio_y && aleatorio_y <= aleatorio_x)
	{
		mayor = aleatorio_x;
		medio = aleatorio_y;
		menor = aleatorio_z;
		
		// muestra en pantalla los 3 # de mayor a menor
		cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
	}
	else if (aleatorio_x <= aleatorio_y && aleatorio_y <= aleatorio_z)
		{	
			mayor = aleatorio_z;
			medio = aleatorio_y;
			menor = aleatorio_x;
			cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
		}
		
	else if (aleatorio_y <= aleatorio_z && aleatorio_z <= aleatorio_x)
		{	
			mayor = aleatorio_x;
			medio = aleatorio_z;
			menor = aleatorio_y;
			cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
		}
	
	else if (aleatorio_x <= aleatorio_z && aleatorio_z <= aleatorio_y)
		{	
			mayor = aleatorio_y;
			medio = aleatorio_z;
			menor = aleatorio_x;
			cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
		}
		
	else if (aleatorio_z <= aleatorio_x && aleatorio_x <= aleatorio_y)
		{
			mayor = aleatorio_y;
			medio = aleatorio_x;
			menor = aleatorio_z;
			cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
		}
			
	else if (aleatorio_y <= aleatorio_x && aleatorio_x <= aleatorio_z)
		{
			mayor = aleatorio_z;
			medio = aleatorio_x;
			menor = aleatorio_y;
			cout << "Los # de mayor a menor son: " << mayor << " " << medio << " " << menor << endl;
		}
	
	return 0;
}
