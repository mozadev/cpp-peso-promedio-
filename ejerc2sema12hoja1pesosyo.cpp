#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;

void ingresadatos(int*n, float*peso)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "ingresa peso " << i + 1 << ":";
		cin >> peso[i];
	}
}

void salidadatos(int*n, float*peso)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "el peso " << i + 1 << "es: " << peso[i] << endl;
		cin >> peso[i];
	}
}

void promedio(int*n, float*peso)
{
	int contadordelgado = 0;
	int contadormediano = 0;
	int contadorgrueso = 0;

	float suma = 0, prom, mayor = peso[0];
	for (int i = 1; i < *n; i++)
	{
		if (mayor < peso[i])
			mayor = peso[i]; 
	}
	
	for (int i = 0; i < *n; i++)
	{
		if (peso[i] < 53)
			contadordelgado++;



		if (peso[i] >= 53 && peso[i] < 60)
			contadormediano++;


		if (peso[i] >= 60)
			contadorgrueso++;
	}
	for (int i = 0; i < *n; i++)
		suma = suma + peso[i];
	prom = suma / (*n );
	cout << "el promedio  es:" << prom << endl;
	cout << "el mayor valor es" << mayor << endl;
	cout << "numero de persona de contextura delgada" << contadordelgado << endl;
	cout << "numero de persona de contextura mediana" << contadormediano << endl;
	cout << "numero de persona de contextura gruesa" << contadorgrueso << endl;
}


int main()
{

	int n = 10;
	float *peso;
	peso = new float[n];
	ingresadatos(&n, peso);
	promedio(&n, peso);
	delete peso;
	_getch();

}








