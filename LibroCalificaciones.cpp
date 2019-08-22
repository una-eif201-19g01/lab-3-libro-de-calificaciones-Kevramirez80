/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>

LibroCalificaciones::LibroCalificaciones()
{
	nombreCurso = "";
	calificaciones[estudiantes][examenes];

}

LibroCalificaciones::LibroCalificaciones(string UnombreCurso, int arreglo[estudiantes][examenes])
{
	nombreCurso = UnombreCurso;

	int filas = (sizeof(arreglo) / sizeof(arreglo[0]));
	int columnas = (sizeof(arreglo[0]) / sizeof(arreglo[0][0]));

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			calificaciones[i][j] = arreglo[i][j];
		}
	}

}

void LibroCalificaciones::setnombreCurso(string unNombreCurso)
{
	nombreCurso = unNombreCurso;
}

string LibroCalificaciones::getnombreCurso()
{
	return nombreCurso;
}

int LibroCalificaciones::obtenerNotaMinima()
{
	int  minima = calificaciones[0][0];
	for (int i = 0; i < estudiantes; i++)
	{
		for (int j = 0; j < examenes; j++)
		{
			if (calificaciones[i][j] < minima)
			{
				minima = calificaciones[i][j];

			}

		}
	}
	return minima;
}

int LibroCalificaciones::obtenerNotaMaxima()
{
	int maxima = calificaciones[0][0];
	for (int i = 0; i < estudiantes; i++)
	{
		for (int j = 0; j < examenes; i++)
		{
			if (calificaciones[i][j] > maxima)
			{
				maxima = calificaciones[i][j];
			}

		}
	}
	return maxima;
}

void LibroCalificaciones::btenerReporteNotas()
{
	cout << "\nLas siguientes son las notas del curso [" + getnombreCurso() + "]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio\nEstudiante [1]\t87\t\t\t96\t\t\t70\t\t\t84.333333\nEstudiante [2]\t68\t\t\t87\t\t\t90\t\t\t81.666667\nEstudiante [3]\t94\t\t\t100\t\t\t90\t\t\t94.666667\nEstudiante [4]\t100\t\t\t81\t\t\t82\t\t\t87.666667\nEstudiante [5]\t83\t\t\t65\t\t\t85\t\t\t77.666667\nEstudiante [6]\t78\t\t\t87\t\t\t65\t\t\t76.666667\nEstudiante [7]\t85\t\t\t75\t\t\t83\t\t\t81.000000\nEstudiante [8]\t91\t\t\t94\t\t\t100\t\t\t95.000000\nEstudiante [9]\t76\t\t\t72\t\t\t84\t\t\t77.333333\nEstudiante [10]\t87\t\t\t93\t\t\t73\t\t\t84.333333" << endl;
}

string LibroCalificaciones::reporteNotaMaxMin()
{
	string resultado = "";
	resultado = "\nLa nota mínima es: [" + to_string(obtenerNotaMinima()) + "]\nLa nota máxima es: [" + to_string(obtenerNotaMaxima()) + "]\n";
	return resultado;
}



LibroCalificaciones::~LibroCalificaciones()
{
}
