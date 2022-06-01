#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
  srand(time(NULL));
  int r = rand()%10+1;
  printf("%d\n", r);
}
