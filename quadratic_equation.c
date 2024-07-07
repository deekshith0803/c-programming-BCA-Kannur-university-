#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, sq1, sq2, sq, d;
    printf("enter number 'a' : ");
    scanf("%d", &a);

    printf("\nenter number 'b' : ");
    scanf("%d", &b);

    printf("\nenter number 'c' : ");
    scanf("%d", &c);

    d = (b * b) - (4 * a * c);

    if(d == 0){
        sq = ((-b)/(2 * a));
        printf("onlu one square is available : %d\n", sq);
    }else if(d < 0){
        printf("root is negative\n");
    }else{
        sq1 = ((-b) + sqrt(d) /( b*a));
        sq2 = ((-b) - sqrt(d) /( b*a));
        printf("two root are available\n");
        printf("first root : %d\nsecond root : %d\n",sq1, sq2);
    }
    return 0;
}