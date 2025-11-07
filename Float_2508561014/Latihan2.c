#include <stdio.h>
#include <string.h>
int main(){
char nama[200];
int uas,uts,ratarata;

printf("Masukan nama anda: ");
fgets(nama,sizeof(nama),stdin);
nama[strcspn(nama, "\n")]='\0';
printf("Masukan Nilai UTS range 0-100:  ");
scanf("%d",&uts);
printf("Masukan Nilai UAS range 0-100:  ");
scanf("%d",&uas);

ratarata=(uts + uas)/2;

if(ratarata>=80 && ratarata<=100)
    {     
    printf("Grade yang didapat oleh %s adalah A\n", nama);
         if(uas>90)
         {
            printf("%s mendapatkan coklat",nama);
         }
    } else if(ratarata>=40 && ratarata<=79)
    {
        printf("Grade yang didapat oleh %s adalah B\n", nama);
    }
    else 
    {
        printf("Grade yang didapat oleh %s adalah C\n", nama);
    }

    return 0;
}