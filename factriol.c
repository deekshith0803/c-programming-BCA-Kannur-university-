#include<stdio.h>

unsigned long long factriol(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n*factriol(n-1);
    }
}

int main() {
    int num;
    printf("enter number");
    scanf("%d", &num);

    if (num<0){
        printf("not defined");
        return 0;
    }else{
        unsigned long long fact = factriol(num);
        printf("fact = %llu", fact);
    }
}