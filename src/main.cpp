#include "../include/excer.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
  int test[] = {1, 2, 3, 4};
  int calendar[CDIM][CDIM] = {{0}, {0}, {0}, {0}, {0}};
  getCalendar(calendar, 8, 2022);

  return 0;
}
