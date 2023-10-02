#include <stdio.h>

int main(){
    int mynum = 958730;
    int mynum2 = 5;
    printf("Jumlah pasukan yang dibawa Yu Zhong", mynum);
    scanf("%d", &mynum2);

    printf("Jumlah pahlawan", mynum2);
    scanf("%d", &mynum2);

    int jumlah_pasukan = mynum/mynum2;
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah", jumlah_pasukan);
    return 0;
}