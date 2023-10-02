#include <stdio.h>

int main(){
    
    int alas = 5;
    int tinggi = 12;
    int miring = 13;

    printf("Diketahui :");
    printf("alas = 5 cm\n");
    printf("Tinggi = 12 cm\n");
    printf("sisi A = %d cm\n", alas);
    printf("sisi B = %d cm\n");
    printf("sisi c = %d cm\n\n", miring);
    int keliling = alas + tinggi + miring;
    int luas = (alas * tinggi) / 2;
    printf("keliling = %d cm\n\n", keliling);
    printf("luas = %d cm", luas);
    return 0;
}