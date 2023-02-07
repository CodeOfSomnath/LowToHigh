
#include "LowToHigh/io.h"
int main(void) {
  string name = input("Hello World: ");
  print(name, NEW_LINE);
  File f;
  f = open("example.txt", "a");
  write(f, "I am genius");
  close(f);
  return 0;
}