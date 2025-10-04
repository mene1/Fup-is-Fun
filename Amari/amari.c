#include <stdio.h>
#include <math.h>

int main(){

    double x1 = 0; double y1 = 0;
    double x2 = 0; double y2 = 0;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double dist = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));

    double result = sqrt(dist);

    printf("%.2lf\n", result);

    return 0;
}