#include "../config.h"
#include <stdio.h>
#include "convolve.h"

int main(int argc, char *argv[]) {

    /*if (argc != 3) {
        printf("Usage: %s \"h_array\"x_array\" \"x_array\"\n", argv[0]);
        return 1;
    }

    // Parse the input arguments and initialize h[] and x[]
    float h[5], x[5];
    sscanf(argv[1], "{ %f, %f, %f, %f, %f }", &h[0], &h[1], &h[2], &h[3], &h[4]);
    sscanf(argv[2], "{ %f, %f, %f, %f, %f }", &x[0], &x[1], &x[2], &x[3], &x[4]);*/

    float h[] = { 1.0, 1.0, 1.0, 1.0, 1.0 };
    float x[] = { 1.0, 1.0, 1.0, 1.0, 1.0 };

    int lenY;
    float *y = convolve(h, x, 5, 5, &lenY);
    for (int i = 0; i < lenY; i++) {
        printf("%0.f ", y[i]);
    }
    puts("");
    free(y);
    return 0;
}
