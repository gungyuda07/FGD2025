#include <stdio.h>

int tertinggi(int arr[], int ukuran) {
    int maks = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int main() {
    int data[5] = {10, 20, 30, 40, 50};
    int hasil = tertinggi(data, 5);

    printf("Nilai tertinggi dalam array: %d\n", hasil);
    return 0;
}
