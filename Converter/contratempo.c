#include <stdio.h>

int main(){

    int sec = 0;

    scanf("%d", &sec);

    int hour = (sec/3600);
    int aux = (sec%3600);
    int min = (aux/60);
    sec = (aux%60);

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}