#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // char
    printf("Data type: char\n");
    printf("Size: %zu bytes\n", sizeof(char));
    printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    // int
    printf("Data type: int\n");
    printf("Size: %zu bytes\n", sizeof(int));
    printf("Range: %d to %d\n\n", INT_MIN, INT_MAX);

    // float
    printf("Data type: float\n");
    printf("Size: %zu bytes\n", sizeof(float));
    printf("Range: %.10e to %.10e\n\n", FLT_MIN, FLT_MAX);

    // double
    printf("Data type: double\n");
    printf("Size: %zu bytes\n", sizeof(double));
    printf("Range: %.10e to %.10e\n\n", DBL_MIN, DBL_MAX);

    // long
    printf("Data type: long\n");
    printf("Size: %zu bytes\n", sizeof(long));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    return 0;
}
