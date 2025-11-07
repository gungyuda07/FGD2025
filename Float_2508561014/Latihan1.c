#include <stdio.h>
#include <string.h>

int main (){

char nama[50];
int angka1, angka2;

printf("Masukan nama anda: ");
fgets(nama,sizeof(nama),stdin);
nama[strcspn(nama, "\n")]='\0';
printf("Masukan bilangan pertama:  ");
scanf("%d",&angka1);
printf("Masukan bilangan kedua:  ");
scanf("%d",&angka2);

printf("\nNama pengguna: %s \n",nama);
printf("Hasil penjumlahan bilangan 1 dengan 2 adalah:  %d \n", angka1+angka2);
printf("Hasil perkalian bilangan 1 dengan 2 adalah:  %d \n",angka1*angka2);
printf("Hasil modulo bilangan 1 dengan 2 adalah:  %d \n",angka1%angka2);
    return 0;
}