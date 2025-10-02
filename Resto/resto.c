#include <stdio.h>

int main(){

    int qntp1 = 0; int qntp2 = 0; int qntp3 = 0;
    float vp1 = 0; float vp2 = 0; float vp3 = 0; float cash = 0;

    scanf("%d %d %d %f %f %f %f", &qntp1, &qntp2, &qntp3, &vp1, &vp2, &vp3, &cash);

    double p1 = (double) (qntp1 * vp1);
    double p2 = (double) (qntp2 * vp2);
    double p3 = (double) (qntp3 * vp3);

    double resto = (cash - p1 - p2 - p3);

    printf("%0.2f\n", resto);

    return 0;
}