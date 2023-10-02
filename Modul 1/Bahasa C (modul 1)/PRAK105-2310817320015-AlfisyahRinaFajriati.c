#include <stdio.h>
int main(){
    int a,b,x,y;

    a = 9;
    printf("Variabel a bernilai 9\n", a);
    b = 5;
    printf("variabel b bernilai 5\n", b);
    x = 8;
    printf("Variabel x bernilai b\n", x);
    y = 8;
    printf("Variabel y bernilai 8\n", y);

    int jumlah = (a%b) + (x%y);
    printf("Total sisanya yaitu: %d\n", jumlah);
    return 0;
}