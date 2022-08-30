#include "../include/excer.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
  const int size = 6;
  int vect[] = {5, 4, 3, 2, 1, 0};
  // cout << average(vect, size) << " Es el promedio!" << endl;
  bubbleSort_bidirectional(vect, size);
  showVector(vect, size);
  return 0;
}
