#include <stdio.h>

int main() {
    
    int array[3][3] = {
        {1, 5, 3},
        {7, 2, 8},
        {4, 6, 9}
    };
    int rows = 3;
    int cols = 3;
    int max = array[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
