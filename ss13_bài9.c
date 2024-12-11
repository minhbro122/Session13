#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Ham kiem tra so nguyen to
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Ham nhap gia tri cac phan tu cua mang
void nhapMang(int n, int m, int arr[n][m]) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Ham in mang theo ma tran
void inMang(int n, int m, int arr[n][m]) {
    printf("Mang theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Ham in cac phan tu o cac goc cua ma tran
void inGoc(int n, int m, int arr[n][m]) {
    printf("Cac phan tu o cac goc:\n");
    printf("%3d %3d\n", arr[0][0], arr[0][m - 1]);
    printf("%3d %3d\n", arr[n - 1][0], arr[n - 1][m - 1]);
}

// Ham in cac phan tu tren duong bien
void inBien(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("%3d ", 0);
            }
        }
        printf("\n");
    }
}

// Ham in cac phan tu tren duong cheo chinh va cheo phu
void inDuongCheo(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("%3d ", 0);
            }
        }
        printf("\n");
    }
}

// Ham in cac phan tu la so nguyen to theo ma tran
void inNguyenTo(int n, int m, int arr[n][m]) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("%3d ", 0);
            }
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int arr[n][m];
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMang(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inBien(n, m, arr);
                break;
            case 5:
                inDuongCheo(n, m, arr);
                break;
            case 6:
                inNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (luaChon != 7);
    return 0;
}

