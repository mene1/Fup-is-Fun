#include <stdio.h>
#include <math.h>

int main(){

    double l1 = 0;
    double l2 = 0;
    double l3 = 0;

    scanf("%lf %lf %lf", &l1, &l2, &l3);

    double p = (l1 + l2 + l3)/2;

    double area = p*(p-l1)*(p-l2)*(p-l3);

    double result = sqrt(area);

    printf("%.2lf\n", result);

    return 0;
}