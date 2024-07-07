
#include <stdio.h>

int main() {
    int ll, ul, i, flag;

    printf("Enter lower limit: ");
    scanf("%d", &ll);
    printf("Enter upper limit: ");
    scanf("%d", &ul);

    printf("Prime numbers between %d and %d are:\n", ll, ul);

    while (ll <= ul) {
        flag = 0;

        if (ll <= 1) { 
            ++ll;
            continue;
        }

        for (i = 2; i <= ll / 2; ++i) {
            if (ll % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d\t", ll);
        }

        ++ll;
    }

    printf("\n");
    return 0;
}
