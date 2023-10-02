#include <stdio.h>
int main(){
    int sisi = (4,5,7);
    int keliling = 16;
    int tanah = 85000;
    int biaya = keliling*tanah;
    printf("Diketahui :");
    printf("Panjang sisi segitiga berturut-turut adalah %d\n", sisi);
    printf("Keliling tanah pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per meter adalah %d\n", tanah);
    printf("Jawaban :");
    printf("Biaya yang diperlukan pak Dengklek adalah %d\n", biaya);
    return 0;
}