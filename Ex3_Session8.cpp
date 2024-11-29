#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = i * n + j + 1;
        }
    }

    printf("Ma tran vuong %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
