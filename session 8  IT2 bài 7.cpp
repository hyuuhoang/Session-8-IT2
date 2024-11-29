#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{6,5,4},{9,7,8}};
    int n = 3;
    int sum = 0;
    printf("cac phan tu tren duong cheo la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\n");
    printf("tong cac phan tu tren duong cheo la: %d\n", sum);
}
