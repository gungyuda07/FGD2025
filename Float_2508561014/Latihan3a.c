#include <stdio.h>

int main() {
int baris, kolom;

printf ("Masukan baris: ");
scanf("%d",&baris);
printf ("Masukan kolom: ");
scanf("%d",&kolom);

int matrik[baris][kolom];

for(int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
        if(i==j){
            matrik[i][j]=0;
            printf("bagian[%d][%d]diisi oleh 0 \n", i,j);
        } else {
            printf("Masukan bagian[%d][%d]: ", i,j);
            scanf("%d",&matrik[i][j]);
        }
    }
}

for(int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
    printf("%d ", matrik[i][j]);
    }
    printf("\n");
}
    return 0;
}
