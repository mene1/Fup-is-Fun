#include <stdio.h>
#include <math.h>

void nround(float num){
    float r1 = round(num);
    printf("%.0f\n", r1);
}

void nfloor(float num){
    float f1 = floor(num);
    printf("%.0f\n", f1);
}

void nceil(float num){
    float c1 = ceil(num);
    printf("%.0f\n", c1);
}

int main(){

    char op; float num = 0;

    scanf("%c %f", &op, &num);

    if(op == 'r'){
        nround(num);
    } else if(op == 'f'){
        nfloor(num);
    } else if(op == 'c'){
        nceil(num);
    }
    return 0;
}