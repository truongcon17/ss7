#include <iostream>
#include <cstdio> 
using namespace std;

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n); 

    int arr[n];

    printf("Nhap %d phan tu cho mang: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

