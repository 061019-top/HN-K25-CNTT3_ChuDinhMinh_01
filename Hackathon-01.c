#include <stdio.h>

int main() {
    int a[100];
    int n = 0;
    int i, j, temp;
    int choice;
    int pos, value;

    do {
    printf("-------------------MENU-------------------\n");
	printf("1. Nhap so luong phan tu trong mang\n");
	printf("2. In cac gia tri cac phan tu trong mang\n");
	printf("3. In cac so la so nguyen to trong mang\n");
	printf("4. Tim gia tri nho nhat trong mang\n"); 
	printf("5. Them moi mot phan tu vao vi tri cu the\n"); 
	printf("6. Xoa phan tu tai vi tri cu the\n"); 
	printf("7. Xep mang theo thu tu tang dan\n"); 
	printf("8. Kiem tra su ton tai cua phan tu co trong mang\n"); 
	printf("9. In mang to bo so le dung truoc so chan\n"); 
	printf("10. Sap xep mang theo thu tu nguoc lai\n"); 	
	printf("Moi ban nhap lua chon");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                for (i = 0; i < n; i++) {
                    if (a[i] >= 2) {
                        for (j = 2; j * j <= a[i]; j++) {
                            if (a[i] % j == 0) break;
                        }
                        if (j * j > a[i]) {
                            printf("%d ", a[i]);
                        }
                    }
                }
                printf("\n");
                break;

            case 4:
                if (n > 0) {
                    int min = a[0];
                    for (i = 1; i < n; i++) {
                        if (a[i] < min) min = a[i];
                    }
                    printf("Gia tri nho nhat: %d\n", min);
                }
                break;

            case 5:
                if (n >= 100) {
                    printf("Mang da day\n");
                } else {
                    printf("Nhap vi tri chen (0-%d): ", n);
                    scanf("%d", &pos);
                    printf("Nhap gia tri: ");
                    scanf("%d", &value);
                    if (pos < 0 || pos > n) {
                        printf("Vi tri khong hop le\n");
                    } else {
                        for (i = n; i > pos; i--) {
                            a[i] = a[i - 1];
                        }
                        a[pos] = value;
                        n++;
                    }
                }
                break;

            case 6:
                printf("Nhap vi tri xoa (0-%d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le\n");
                } else {
                    for (i = pos; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                }
                break;

            case 7:
                for (i = 0; i < n - 1; i++) {
                    int minIndex = i;
                    for (j = i + 1; j < n; j++) {
                        if (a[j] < a[minIndex]) {
                            minIndex = j;
                        }
                    }
                    temp = a[i];
                    a[i] = a[minIndex];
                    a[minIndex] = temp;
                }
                break;

            case 8:
                break;

            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 8);

    return 0;
}
