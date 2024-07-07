#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    int i, n, f = 0;
    printf("Enter a string: ");
    scanf("%s", a);
    n = strlen(a);
    for(i = 0; i < n / 2; i++) {
        if(a[i] != a[n - i - 1]) {
            f = 1;
            break;
        }
    }
    if(f == 1) {
        printf("Not a palindrome\n");
    } else {
        printf("Palindrome\n");
    }
    return 0;
}
