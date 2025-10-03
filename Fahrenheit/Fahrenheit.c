#include <stdio.h>

int main(){

    double tempC = 0;

    scanf("%lf", &tempC);

    double tempF = (1.8 * tempC) + 32;

    printf("%lf\n", tempF);

    return 0;
}