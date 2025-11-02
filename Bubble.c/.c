#include <stdio.h>

int main(void) {
    int a[50], num, i, j, temp;
    printf("n: ");
    if (scanf("%d", &num) != 1) return 1;
    if (num <= 0 || num > 50) {
        printf("Please enter a number between 1 and 50.\n");
        return 1;
    }

    for (i = 0; i < num; i++) {
        printf("a[%d] = ", i);
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    printf("Before sorting:\n");
    for (i = 0; i < num; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("After sorting:\n");
    for (j = 0; j < num; j++) {
        printf("a[%d] = %d\n", j, a[j]);
    }

    return 0;
}