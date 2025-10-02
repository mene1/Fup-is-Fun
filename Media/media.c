#include <stdio.h>

int main(){

    int n1 = 0; int n2 = 0;

    scanf("%d %d", &n1, &n2);

    double media = (double) (n1 + n2)/2;

    printf("%0.1f\n", media);

    return 0;
}