#include <stdio.h>
int main() {
  int a;
  int *pt;

  printf("Pointer Example Program : Increment and Decrement Integer\n");
  a = 10;
  pt = &a;

  (*pt)++; //Post Increment
  printf("\n[a  ]:Increment Value of A = %d", a);
    ++(*pt); //Pre Increment
  printf("\n[a  ]:Increment Value of A = %d", a);
  return 0;
}