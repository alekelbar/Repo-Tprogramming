#include "../include/excer.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
  int test[] = {1, 2, 3, 4};
  int calendar[CDIM][CDIM] = {{0}, {0}, {0}, {0}, {0}};
  getCalendar(calendar, 2);

  cout << "================================================================"
       << endl;
  cout << "Añó: " << getDays(4, 2013);

  return 0;
}
