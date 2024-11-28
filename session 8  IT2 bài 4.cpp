#include <stdio.h>

int main() {

    int mang[3][3] = {
        {3, 5, 7},
        {8, 1, 9},
        {4, 6, 2}
    };

    int max = mang[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

