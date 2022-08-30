
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
