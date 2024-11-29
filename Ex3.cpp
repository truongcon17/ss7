#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int i = 0;
    
    cout << "Nhap 5 phan tu cho mang: \n";
    while (i < 5) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
        i++;  // Tang ch? s? sau m?i l?n nh?p
    }
    cout << "Cac so chan trong mang: ";
    bool foundEven = false; 

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            cout << arr[i] << " ";
            foundEven = true;  
        }
    }

    if (!foundEven) {  
        cout << "\nMang khong chua so chan";
    }

    return 0;
}

