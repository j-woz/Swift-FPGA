
#include <stdio.h>
#include <unistd.h>

#include "g.h"

static int counter = -1000;

void g_init()
{
  counter = 0;
}

int g(int i1, int i2)
{
  counter++;
  int sum = i1+i2+counter;
  printf("g: %i+%i+%i=%i\n", i1, i2, counter, sum);
  printf("sleeping for %i seconds...\n", sum);
  sleep(sum);
  return sum;
}
