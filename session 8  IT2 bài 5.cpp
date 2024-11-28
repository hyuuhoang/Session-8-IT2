#include <stdio.h>

int main() {
    int mang[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int tong = 0;


    int hang = 4;
    int cot = 4;

    for (int i = 0; i < cot; i++) {
        tong += mang[0][i];
        tong += mang[hang-1][i];
    }

    for (int i = 1; i < hang - 1; i++) {
        tong += mang[i][0];
        tong += mang[i][cot-1];
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
}

