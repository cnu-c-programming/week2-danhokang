#include <stdio.h>

int main()
{
    int n, i;
    int isPrime = 1;

    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    }
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}
