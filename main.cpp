/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include "LibroCalificaciones.h"

int main() {
	int arreglo[estudiantes][examenes] = { { 87, 96, 70 }, { 68, 87, 90 }, { 94, 100, 90 }, { 100, 81, 82 }, { 83, 65, 85 },{ 78, 87, 65 }, { 85, 75, 83 }, { 91, 94, 100 }, { 76, 72, 84 }, { 87, 93, 73 } };
	for (int i = 0; i < estudiantes; i++)
	{
		cout << "Estudiante " << endl;
		for (int j = 0; j < examenes; j++)
		{
			cout << arreglo[i][j] << endl;
		}
	}
}
