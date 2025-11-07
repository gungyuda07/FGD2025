#include <stdio.h>

void cetak(char nama[], int index) {
    if (index < 0) {
        return;
    }
    cetak(nama, index - 1);
    printf("%c\n", nama[index]);
}

int main() {
    char nama[] = "Gungyuda";
    int panjang = 0;

    while (nama[panjang] != '\0') {
        panjang++;
    }

    cetak(nama, panjang - 1);
    return 0;
}
