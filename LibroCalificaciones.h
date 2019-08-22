/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
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


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
using namespace std;
const int estudiantes = 10;
const int examenes = 3;
class LibroCalificaciones {

private :

	string nombreCurso;
	int calificaciones[estudiantes][examenes];
public:
	LibroCalificaciones();
	LibroCalificaciones(string nomreCurso,int arreglo[estudiantes][examenes]);
	void setnombreCurso(string);
	string getnombreCurso();
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	void btenerReporteNotas();
	string reporteNotaMaxMin();
	~LibroCalificaciones();




};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
