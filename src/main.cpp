#include "../include/excer.hpp"
using namespace std;

int main(int argc, char const *argv[]) {

  if (argc >= 2) {
    getFullCalendar(atoi(argv[1]));
  }
  // OJO, si no se usa la consola de comandos, correr este código...
  // Obtener el calendario completo del año 2012...
  // getFullCalendar(2012);

  return 0;
}
