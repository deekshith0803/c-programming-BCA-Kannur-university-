#include <stdio.h>

int main() {
    float f, c;
    printf("enter the tempurature : ");
    scanf("%f",&f);
    c = (f - 32) * 5 / 9; 
    printf("celsius : %f", c );
    return 0;
}