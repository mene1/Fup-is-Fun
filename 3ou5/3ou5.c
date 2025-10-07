#include <stdio.h>

int main(){

    int n1 = 0;

    scanf("%d", &n1);

    if(n1 == 3 || n1 == 5){
        printf("SIM\n");
        return 0;
    } else {
        printf("NAO\n");
        return 0;
    }
}