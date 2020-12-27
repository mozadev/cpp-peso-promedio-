// ConsoleApplication11.cpp : main project file.
/*n
Udimensional
Ejercicio 1
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace System;
using namespace std;

void IngreseDatos(int *N, float *Pesos)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Ingrese el Pesos " << i + 1 << " : "; cin >> Pesos[i];
	}
}
void SalidaDatos(int *N, float *Pesos)
{

	for (int i = 0; i < *N; i++)
	{
		cout << "El peso " << i + 1 << " es : " << Pesos[i] << "\n";
	}
}
void Promedio(int *N, float *Pesos)
{
	int Posi;
	float Suma = 0, Pro, Mayor = Pesos[0];
	for (int i = 1; i < *N; i++)
	{
		if (Mayor <Pesos[i])
		{
			Mayor = Pesos[i];
			Posi = i;
		}
	}
	for (int i = 0; i < *N; i++)
	{

		Suma = Suma + Pesos[i];
		Pro = Suma / (*N);

	}
	cout << "El promedio  es : " << Pro << "\n";
	cout << "El mayor valor es : " << Mayor << "\n";

}
void Contadores(int *N, float *Pesos)
{
	int CD = 0;
	int CM = 0;
	int CG = 0;
	for (int i = 0; i < *N; i++)
	{
		if (Pesos[i] <53)
		{
			CD++;
		}
	}
	for (int i = 0; i < *N; i++)
	{
		if (Pesos[i] >=53 && Pesos[i] <=60)
		{
			CM++;
		}
	}
	for (int i = 0; i < *N; i++)
	{
		if (Pesos[i] >60)
		{
			CG++;
		}
	}
	cout << "La cantidad de personas delgadas es:" << CD<< "\n";
	cout << "La cantidad de personas medianas es:" << CM << "\n";
	cout << "La cantidad de personas gruesas es:" << CG<< "\n";

}
int main()
{
	int N = 10;
	float *Pesos = new float[N];
	IngreseDatos(&N, Pesos);
	SalidaDatos(&N, Pesos);
	Promedio(&N, Pesos);
	Contadores(&N,Pesos);
	_getch();
	delete Pesos;
}

