#include <iostream>
using namespace std;

int main() {
    int n;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        while (true) {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);

            if (arr[i] % 2 != 0) {
                break;
            } else {
                printf("Phan tu phai la so le. Vui long nhap lai.\n");
            }
        }
    }
    
    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
