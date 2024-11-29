#include <stdio.h>

int main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    int a = 0;

    printf("Cac phan tu tren duong cheo chinh cua ma tran la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        a += array[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la : %d\n", a);

    return 0;
}
