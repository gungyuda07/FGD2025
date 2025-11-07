#include <stdio.h>

int main() {
int tinggi;
printf("Masukan tinggi segitiga: ");
scanf("%d",&tinggi);

for(int i=tinggi; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}
    
