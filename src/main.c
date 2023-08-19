#include "../config.h"
#include <stdio.h>
#include "convolve.h"

int main(int argc, char *argv[])
{
  float h[] = { 1.0, 1.0, 1.0, 1.0, 1.0 };
  float x[] = { 1.0, 1.0, 1.0, 1.0, 1.0 };
  int lenY;
  float *y = convolve(h,x,5,5,&lenY);
  for(int i=0;i<lenY;i++) {
    printf("%0.f ",y[i]);
  }
  puts("");
  free(y);
  return 0;
}
