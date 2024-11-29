#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = length - 1; i >= 0; i--) {
        printf("%d\n", array[i]);
    }

    return 0;
}
