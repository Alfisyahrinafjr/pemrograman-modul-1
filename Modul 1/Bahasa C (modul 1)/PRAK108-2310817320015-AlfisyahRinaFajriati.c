#include<stdio.h>

int main(){
    float a = 5, b = 14;
    printf("Pak Dengklek mengelilingintaman 5\n", a);
    printf("Jarak tempuh pak Dengklek 14\n", b);
    double keliling = b/a;
    double jari_jari = keliling/(2*3.14);
    printf("Jari-jari taman yang dikelilingi pak Dengklek adalah %.2f");
    return 0;
}