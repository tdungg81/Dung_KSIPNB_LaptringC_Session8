#include <stdio.h>

int main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    int a = 0;

    printf("Cac phan tu tren duong cheo phu cua ma tran la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][n - i - 1]);
        a += array[i][n - i - 1];
    }
    printf("\nTong ca phan tu tren duong cheo phu la : %d\n", a);

    return 0;
}
