#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Nhap 5 phan tu cho mang: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Mang ban vua nhap la: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

