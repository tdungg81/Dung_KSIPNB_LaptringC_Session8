#include <stdio.h>

int main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += array[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}
