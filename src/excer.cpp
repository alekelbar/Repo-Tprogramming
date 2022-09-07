
#include "../include/excer.hpp"

// Resolución del ejercicio #1
// invertir una vector...

void reverse(int vect[], int size) {
  // code
  int vectAux[size]; // copia...

  for (int i = (size - 1); i >= 0; i--) {
    vectAux[i] = vect[(size - 1) - i];
  }

  copyVector(vectAux, vect, size);
}

void copyVector(int source[], int dest[], int size) {
  for (int i = 0; i < size; i++) {
    dest[i] = source[i];
  }
}

void showVector(int vect[], int size) {
  for (int i = 0; i < size; i++) {
    cout << vect[i] << " ";
  }
  cout << endl;
}

// Calcular el máximo valor de las entradas de un vector...
int maxValue(int vect[], int size) {
  int max = vect[0];
  for (int i = 1; i < size; i++) {
    if (vect[i] > max) {
      max = vect[i];
    }
  }
  return max;
}

// calculo de la suma de las entradas de un vector...
int sum(int vect[], int size) {
  int sum = 0;
  for (size_t i = 0; i < size; i++) {
    sum += vect[i];
    // sum = sum + vect[i];
  }
  return sum;
}

int sumRecursive(int vect[], int start, int size) {
  if (start >= size)
    return 0;
  return vect[start] + sumRecursive(vect, start + 1, size);
}

// calcular el promedio de un vector...
int average(int vect[], int size) { return sum(vect, size) / size; }

// Corrimiento circular hacia la derecha de un vector...
void sliceRight(int vect[], int size) {
  int aux = vect[size - 1];
  for (int i = size - 1; i >= 0; i--) {
    vect[i] = vect[i - 1];
  }
  vect[0] = aux;
}

// calculo de la varianza de un vector...
int variance(int vect[], int size) {
  int sum = 0;
  int avrg = average(vect, size);
  for (int i = 0; i < size; i++) {
    sum += pow(avrg - vect[i], 2);
  }
  return sum / size;
}

// calculo de la desviación estandar
int standard_deviation(int vect[], int size) {
  // Recuperado de:
  // https://www.disfrutalasmatematicas.com/datos/desviacion-estandar-formulas.html
  int avrg = average(vect, size);
  int deviation = 0;
  for (int i = 0; i < size; i++) {
    deviation += pow(vect[i] - avrg, 2);
  }
  deviation /= size;
  return sqrt(deviation);
}

void bubbleSort(int arr[], int size) {

  for (int j = 0; j < size; j++) {

    for (int i = 0; i < size - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
      }
    }
  }
}

void bubbleSort_bidirectional(int arr[], int size) {
  int left = 0;
  int right = size;
  while (left < right) {
    // la burbujar más pesada hacia arriba...
    for (int i = left; i < right; i++) {
      if (arr[i] > arr[i + 1]) {
        int aux = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = aux;
      }
    }

    // la burbuja más liviana hacia abajo...
    for (int i = (right - 1); i > left; i--) {
      if (arr[i] < arr[i - 1]) {
        int aux = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = aux;
      }
    }

    left++;
    right--;
  }
}

int calCeros(int mat[DIM][DIM]) {
  // Calculo del numero máximo de entradas cero de una matriz...
  int sum = 0;
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (mat[i][j] == 0) {
        sum++;
      }
    }
  }
  return sum;
}

// llenado secuencial de la matriz ...
void fillSeq(int mat[DIM][DIM]) {
  int cont = 0;
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      mat[i][j] = cont;
      cont++;
    }
  }
}

// Obtener la matriz transpuesta de una matriz ...
void make_transpose(int mat[DIM][DIM], int transpose[DIM][DIM]) {
  // Nota, recordar que si las dimensiones son diferentes, transpose debe ser
  // [colums][rows]
  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      transpose[i][j] = mat[j][i];
    }
  }
}

// Calcular la traza de una matriz...
int cal_trace(int mat[DIM][DIM]) {
  // La traza de una matriz es la suma de su diagonal principal...
  int sum = 0;

  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (i == j) {
        sum += mat[i][j];
      }
    }
  }
  return sum;
}

// Saber si una matriz es simetrica...
bool get_simetric(int mat[DIM][DIM]) {
  // Una matriz es simetrica, si es que es igual a su transpuesta
  int transpose[DIM][DIM];

  make_transpose(mat, transpose);

  for (int i = 0; i < DIM; i++) {
    for (int j = 0; j < DIM; j++) {
      if (mat[i][j] != transpose[i][j]) {
        return false;
      }
    }
  }
  return true;
}

string sliceRight(string hilera) {
  string copy = hilera;
  for (int i = 0; i < hilera.size(); i++) {
    swap(copy[0], copy[i]);
  }
  return copy;
}

// Calendar App
void getCalendar(int mat[CDIM][CDIM], int month) {

  int cont = 0; // Cuenta cada día...
  cout << "DOM LUN MAR MIE JUE VIE SAB" << endl;
  for (int i = 0; i < CDIM; i++) {
    for (int j = 0; j < CDIM; j++) {
      cont++; // Pasamos al siguiente día..
      if (cont <= 31) {
        /*Mientras no se haya pasado de los 31 días...*/
        mat[i][j] = cont;
        cout << mat[i][j] << (cont > 9 ? "  " : "   ");
      }
    }
    cout << endl;
  }
}

// funcion para saber cuantos días tiene un mes...
int getDays(int month, int year) {
  int thirtyOne[] = {1, 3, 4, 6, 7, 9, 12};
  int thirty[] = {4, 5, 8, 11};

  if (itsOn(thirty, 4, month)) {
    return 30;
  }

  if (itsOn(thirtyOne, 7, month)) {
    return 31;
  }

  if (isALeapYear(year)) {
    return 28;
  }

  return 29; // UN añó no bisiesto, y es febrero...
}

// funcion auxiliar para get days, me dice si un elemento se encuentra en un
// vector.
bool itsOn(int vect[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (vect[i] == target)
      return true;
  }
  return false;
}

// Funcion para saber si un año es bisiesto...
bool isALeapYear(int year) {
  /*https://docs.microsoft.com/es-es/office/troubleshoot/excel/determine-a-leap-year*/
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}