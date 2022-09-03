#ifndef __EXCER_H__
#define __EXCER_H__

#pragma once

#include <iostream>
#include <math.h>
using namespace std;
void showVector(int vect[], int size);

// Inversi ́on del orden de aparici ́on de los datos contenidos en un vector.
void reverse(int vect[], int size);

void copyVector(int source[], int dest[], int size);

// calculo del mayor elemento de un vector
int maxValue(int vect[], int size);

// calculo de la suma de las entradas de un vector...
int sum(int vect[], int size);

int sumRecursive(int vect[], int start, int size);

// calcular el promedio de un vector...
int average(int vect[], int size);

// Corrimiento circular hacia la derecha de un vector...
void sliceRight(int vect[], int size);

// calculo de la varianza de un vector...
int variance(int vect[], int size);

// calculo de la desviación estandar
int standard_deviation(int vect[], int size);

// ordenamiento por metodo de la burbuja...
void bubbleSort(int arr[], int size);

// ordenamiento de burbuja vi-direccional.
void bubbleSort_bidirectional(int arr[], int size);

// Calculo del num máximo de entradas cero de una matriz...
const int DIM = 3;
int calCeros(int mat[DIM][DIM]);

// llenado secuencial de la matriz ...
void fillSeq(int mat[DIM][DIM]);

// matriz transpuesta de una matriz ...
void make_transpose(int mat[DIM][DIM], int transpose[DIM][DIM]);

// Calcular la traza de una matriz...
int cal_trace(int mat[DIM][DIM]);

// Saber si una matriz es simetrica...
bool get_simetric(int mat[DIM][DIM]);

// corrimiento circular de un string a la derecha...
string sliceRight(string hilera);

#endif // __EXCER_H__