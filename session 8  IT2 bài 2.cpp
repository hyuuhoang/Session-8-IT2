#include <stdio.h>

int main() {
    int mang[] = {3, 5, 7, 2, 8, 10, 1};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int phanTu, viTri = -1;

    printf("Nhap vao mot phan tu de kiem tra: ");
    scanf("%d", &phanTu);

    for (int i = 0; i < kichThuoc; i++) {
        if (mang[i] == phanTu) {
            viTri = i;
            break;
        }
    }

    // In ra k?t qu?
    if (viTri != -1) {
        printf("vi tri phan tu trong mang la  %d\n", viTri);
    } else {
        printf("phan tu khong ton tai trong mang \n");
    }

    return 0;
}

