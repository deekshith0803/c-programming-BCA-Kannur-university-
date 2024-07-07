#include<stdio.h>

int main() {
    int n1, n2, n3, fn, sn;
    printf("enter 3 number : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3) {
        fn = n1;
        if(n2 > n3){
            sn = n2;
        }else{
            sn = n3;
        }
    }else if (n2 > n1 && n2 > n3) {
        fn = n2;
        if(n1 > n3) {
            sn = n1;
        }else{
            sn = n3;
        }
    }else{
        fn = n3;
        if(n1 > n2) {
            sn = n1;
        }else{
            sn = n2;
        }
    }
    printf("greater number : %d\n", fn);
    printf("second greatesr number : %d\n",sn);
    return 0;
}