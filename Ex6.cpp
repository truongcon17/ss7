#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    
    printf("Vui long nhap kich thuoc mang ban muon kiem tra: ");
    scanf("%d", &n);
    
    int box[n];
    
    printf("Nhap %d phan tu cho mang: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &box[i]);
    }

    for (int i = 0; i < n; i++) {
        if (box[i] % 2 == 0) {
            box[i] += 3;
        } else {
            box[i] += 2;
        }
    }

    printf("Mang sau khi thay doi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", box[i]);
    }
    printf("\n");

    return 0;
}

