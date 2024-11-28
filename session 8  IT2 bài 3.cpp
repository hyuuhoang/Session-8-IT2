#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);


    int mang[n][n];

    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    printf("Ma tran vuong %dx%d la:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

