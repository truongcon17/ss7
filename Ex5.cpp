#include <iostream>
#include <cstdio>  
using namespace std;

int main() {
    int n;
    
    printf("Vui long nhap kich thuoc mang ban muon kiem tra : ");
    scanf("%d", &n);
    
    int box[n];
    
    printf("Nhap %d phan tu cho mang: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &box[i]);
    }
    int min = box[0];
    int max = box[0];

  
    for (int i = 1; i < 5; i++) {
        if (box[i] < min) {
            min = box[i];  
        }
        if (box[i] > max) {
            max = box[i]; 
        }
    }

    // In ra ph?n t? l?n nh?t và ph?n t? nh? nh?t
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

